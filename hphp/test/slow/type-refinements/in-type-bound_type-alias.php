<?hh

interface Box {
  abstract const type T;
}

class Covar<+T> {}

type AliasGood<T as Box with { type T = int }> = Covar<Box>;
