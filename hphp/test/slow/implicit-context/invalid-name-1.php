<?hh

<<__EntryPoint>>
function main() :mixed{
  try {
    HH\ImplicitContext\_Private\create_implicit_context('_Context', 1, true);
  } catch (Exception $e) {
    echo $e->getMessage() . "\n";
  }
}
