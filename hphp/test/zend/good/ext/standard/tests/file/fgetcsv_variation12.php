<?hh
/* 
 Prototype: array fgetcsv ( resource $handle [, int $length [, string $delimiter [, string $enclosure]]] );
 Description: Gets line from file pointer and parse for CSV fields
*/

/* Testing fgetcsv() by providing two characters for enclosure and delimiter parameters */
<<__EntryPoint>> function main(): void {
echo "*** Testing fgetcsv() : with two chars as enclosure & delimiter ***\n";

/* the array is with three elements in it. Each element should be read as 
   1st element is delimiter, 2nd element is enclosure 
   and 3rd element is csv fields
*/
$csv_lists = vec[
  vec[',', '"', '"water",fruit'],
  vec[',', '"', '"water","fruit"'],
  vec[' ', '^', '^water^ ^fruit^'],
  vec[':', '&', '&water&:&fruit&'],
  vec['=', '=', '=water===fruit='],
  vec['-', '-', '-water--fruit-air'],
  vec['-', '-', '-water---fruit---air-'],
  vec[':', '&', '&""""&:&"&:,:":&,&:,,,,']
];

$filename = sys_get_temp_dir().'/'.'fgetcsv_variation12.tmp';
@unlink($filename);

$file_modes = vec["r","rb", "rt", "r+", "r+b", "r+t",
                     "a+", "a+b", "a+t"];

$loop_counter = 1;
foreach ($csv_lists as $csv_list) {
  for($mode_counter = 0; $mode_counter < count($file_modes); $mode_counter++) {
    // create the file and add the content with has csv fields
    if ( strstr($file_modes[$mode_counter], "r") ) {
      $file_handle = fopen($filename, "w");
    } else {
      $file_handle = fopen($filename, $file_modes[$mode_counter] );
    }
    if ( !$file_handle ) {
      echo "Error: failed to create file $filename!\n";
      exit();
    }
    $delimiter = $csv_list[0];
    $enclosure = $csv_list[1];
    $csv_field = $csv_list[2];
    fwrite($file_handle, $csv_field . "\n");
 
    // write another line of text and a blank line
    // this will be used to test, if the fgetcsv() read more than a line and its
    // working when only a blank line is read
    fwrite($file_handle, "This is line of text without csv fields\n");
    fwrite($file_handle, "\n"); // blank line

    // close the file if the mode to be used is read mode  and re-open using read mode
    // else rewind the file pointer to beginning of the file 
    if ( strstr($file_modes[$mode_counter], "r" ) ) {
      fclose($file_handle);
      $file_handle = fopen($filename, $file_modes[$mode_counter]);
    } else {
      // rewind the file pointer to bof
      rewind($file_handle);
    }
      
    echo "\n-- Testing fgetcsv() with file opened using $file_modes[$mode_counter] mode --\n"; 

    // call fgetcsv() to parse csv fields

    // use delimiter & enclosure char of two chars 
    fseek($file_handle, 0, SEEK_SET);
    $del = "++";
    $enc = "%%";
    var_dump( fgetcsv($file_handle, 1024, $del, $enc) );
    // check the file pointer position and if eof
    var_dump( ftell($file_handle) );
    var_dump( feof($file_handle) );
    
    // close the file
    fclose($file_handle);
    //delete file
    unlink($filename);
  } //end of mode loop 
} // end of foreach

echo "Done\n";
}
