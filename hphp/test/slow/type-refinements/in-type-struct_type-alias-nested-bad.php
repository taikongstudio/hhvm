<?hh

abstract class Box {
  abstract const type T;
}

type AliasBadInFunArg = (function(Box with { type T = int }): int);
