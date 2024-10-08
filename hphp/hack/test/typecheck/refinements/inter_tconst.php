<?hh
// Copyright 2004-present Facebook. All Rights Reserved.

abstract class A {
  abstract const type Ta as arraykey;
  abstract public function get(): this::Ta;
}
interface B {}

function geta<T as A with { type Ta = Ta }, Ta>(T $x): Ta {
  return $x->get();
}

function test(A $x): void {
  if ($x is B) {
    geta($x);
  }
}
