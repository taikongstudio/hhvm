(*
 * Copyright (c) 2015, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

(**
 * Hack for HipHop: type checker's server monitor code.
 *
 * This runs hh server in 1 of 3 ways:
   1) Runs hh server in-process (check mode)
   2) Runs a ServerMonitor in-process which will pass connections to a
      daemonized hh server (non-detached mode).
   3) Daemonizes a ServerMonitor which will pass connections to a daemonized
      hh_server (detached mode).
*)

let () = Random.self_init ()

module SM =
  ServerMonitor.Make_monitor
    (HhServerMonitorConfig.HhServerConfig)
    (HhMonitorInformant)

let make_tmp_dir () =
  let tmpdir = Path.make (Tmp.temp_dir GlobalConfig.tmp_dir "files") in
  Relative_path.set_path_prefix Relative_path.Tmp tmpdir

(** Main method of the server monitor daemon. The daemon is responsible for
    listening to socket requests from hh_client, checking Build ID, and relaying
    requests to the typechecker process. *)
let monitor_daemon_main
    (options : ServerArgs.options) ~(proc_stack : string list) =
  Folly.ensure_folly_init ();

  let www_root = ServerArgs.root options in

  (* Check mode: --check means we'll start up the server and it will do a typecheck
     and then terminate; in the absence of that flag, (1) if a monitor was already running
     then we will exit immediately, and avoid side-effects like cycling the logfile;
     (2) otherwise we'll start up the server and it will continue to run
     and handle requests. *)
  (if not (ServerArgs.check_mode options) then
    let lock_file = ServerFiles.lock_file www_root in
    if not (Lock.grab lock_file) then Exit.exit Exit_status.No_error);

  (* Daemon mode (should_detach): --daemon means the caller already spawned
     us in a new process, and it's now our responsibility to establish a logfile
     and redirect stdout/err to it; in the absence of that flag, we'll just continue
     to write to stdout/err as normal. *)
  if ServerArgs.should_detach options then begin
    let log_link = ServerFiles.monitor_log_link www_root in
    (try Sys.rename log_link (log_link ^ ".old") with
    | _ -> ());
    let log_file_path = Sys_utils.make_link_of_timestamped log_link in
    try Sys_utils.redirect_stdout_and_stderr_to_file log_file_path with
    | e ->
      Printf.eprintf "Can't write to logfile: %s\n%!" (Printexc.to_string e)
  end;

  Relative_path.set_path_prefix Relative_path.Root www_root;
  let () = ServerLoadFlag.set_no_load (ServerArgs.no_load options) in
  let init_id = Random_id.short_string () in
  let (config, local_config) =
    ServerConfig.(load ~silent:false filename options)
  in
  if Sys_utils.is_test_mode () then
    EventLogger.init_fake ()
  else
    HackEventLogger.init_monitor
      ~from:(ServerArgs.from options)
      ~custom_columns:(ServerArgs.custom_telemetry_data options)
      ~hhconfig_version:
        (ServerConfig.version config |> Config_file.version_to_string_opt)
      ~rollout_flags:(ServerLocalConfig.to_rollout_flags local_config)
      ~proc_stack
      (ServerArgs.root options)
      init_id
      (Unix.gettimeofday ());
  Sys_utils.set_signal
    Sys.sigpipe
    (Sys.Signal_handle (fun i -> Hh_logger.log "SIGPIPE(%d)" i));

  ignore @@ Sys_utils.setsid ();
  ignore (make_tmp_dir ());
  ignore (Hhi.get_hhi_root ());
  Typing_global_inference.set_path ();

  if ServerArgs.check_mode options then (
    Hh_logger.log "%s" "Will run once in check mode then exit.";
    ServerMain.run_once options config local_config
  ) else
    let current_version = ServerConfig.version config in
    let waiting_client = ServerArgs.waiting_client options in
    let ServerLocalConfig.Watchman.
          { debug_logging; subscribe = allow_subscriptions; _ } =
      local_config.ServerLocalConfig.watchman
    in
    let informant_options =
      {
        HhMonitorInformant.root = ServerArgs.root options;
        allow_subscriptions;
        use_dummy = local_config.ServerLocalConfig.use_dummy_informant;
        watchman_debug_logging =
          ServerArgs.watchman_debug_logging options || debug_logging;
        min_distance_restart =
          local_config.ServerLocalConfig.informant_min_distance_restart;
        ignore_hh_version = ServerArgs.ignore_hh_version options;
        is_saved_state_precomputed =
          (match ServerArgs.with_saved_state options with
          | Some (ServerArgs.Saved_state_target_info _) -> true
          | _ -> false);
        monitor_kill_again_fix =
          local_config.ServerLocalConfig.monitor_kill_again_fix;
      }
    in
    SM.start_monitoring
      ~current_version
      ~waiting_client
      ~max_purgatory_clients:
        local_config.ServerLocalConfig.max_purgatory_clients
      options
      informant_options
      ServerMonitorUtils.
        {
          socket_file = ServerFiles.socket_file www_root;
          lock_file = ServerFiles.lock_file www_root;
          server_log_file = ServerFiles.log_link www_root;
          monitor_log_file = ServerFiles.monitor_log_link www_root;
        }

let daemon_entry =
  Daemon.register_entry_point
    "monitor_daemon_main"
    (fun ((options, proc_stack) : ServerArgs.options * string list) (_ic, _oc)
    -> monitor_daemon_main options ~proc_stack)

(** Either starts a monitor daemon (which will spawn a typechecker daemon),
    or just runs the typechecker if detachment not enabled. *)
let start () =
  (* TODO: Catch all exceptions that make it this high, log them, and exit with
   * the proper code *)
  try
    (* This avoids dying if SIGUSR{1,2} is received by accident *)
    Sys_utils.set_signal Sys.sigusr1 Sys.Signal_ignore;
    Sys_utils.set_signal Sys.sigusr2 Sys.Signal_ignore;
    Daemon.check_entry_point ();
    Folly.ensure_folly_init ();
    (* this call might not return *)
    let proc_stack =
      match Proc.get_proc_stack ~max_length:1000 (Unix.getpid ()) with
      | Ok proc_stack -> proc_stack
      | Error e -> [e]
    in
    let options = ServerArgs.parse_options () in
    if ServerArgs.should_detach options then begin
      let (_ : (unit, unit) Daemon.handle) =
        Daemon.spawn
          (Daemon.null_fd (), Unix.stdout, Unix.stderr)
          daemon_entry
          (options, proc_stack)
      in
      Printf.eprintf "Running in daemon mode\n";
      Exit.exit Exit_status.No_error
    end else
      monitor_daemon_main options ~proc_stack
  with
  | SharedMem.Out_of_shared_memory -> Exit.exit Exit_status.Out_of_shared_memory
