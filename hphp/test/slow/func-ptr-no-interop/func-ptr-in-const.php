<?hh

function foo() {}

class Cls {
  public static function meth() {}
}

class A {
  public static $arr = dict[
    'foo' => foo<>,
    'meth' => Cls::meth<>,
  ];
}

class B {
  const f = dict[
    'foo' => foo<>,
    'meth' => Cls::meth<>,
  ];
}

<<__EntryPoint>>
function main() {
  var_dump(A::$arr);
  var_dump(B::f);
  var_dump(A::$arr === B::f);
}
