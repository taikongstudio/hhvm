<?hh
/* Prototype  : void closedir([resource $dir_handle])
 * Description: Close directory connection identified by the dir_handle
 * Source code: ext/standard/dir.c
 * Alias to functions: close
 */

/*
 * Pass different data types as $dir_handle argument to closedir() to test behaviour
 */

// get a class
class classA
{
  public function __toString() :mixed{
    return "Class A object";
  }
}
<<__EntryPoint>> function main(): void {
echo "*** Testing closedir() : usage variations ***\n";


// heredoc string
$heredoc = <<<EOT
hello world
EOT;

// unexpected values to be passed to $dir_handle argument
$inputs = vec[

       // int data
/*1*/  0,
       1,
       12345,
       -2345,

       // float data
/*5*/  10.5,
       -10.5,
       12.3456789000e10,
       12.3456789000E-10,
       .5,

       // null data
/*10*/ NULL,
       null,

       // boolean data
/*12*/ true,
       false,
       TRUE,
       FALSE,

       // empty data
/*16*/ "",
       '',
       vec[],

       // string data
/*19*/ "string",
       'string',
       $heredoc,

       // object data
/*22*/ new classA(),


];

// loop through each element of $inputs to check the behavior of closedir()
$iterator = 1;
foreach($inputs as $input) {
  echo "\n-- Iteration $iterator --\n";
  try { var_dump( closedir($input) ); } catch (Exception $e) { echo "\n".'Warning: '.$e->getMessage().' in '.__FILE__.' on line '.__LINE__."\n"; }
  $iterator++;
};

echo "===DONE===\n";
}
