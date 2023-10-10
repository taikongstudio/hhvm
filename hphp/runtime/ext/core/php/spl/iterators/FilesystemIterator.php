<?hh

// This doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/class.filesystemiterator.php )
 *
 * The Filesystem iterator
 *
 */
class FilesystemIterator extends DirectoryIterator {

  const CURRENT_AS_PATHNAME = 32;
  const CURRENT_AS_FILEINFO = 0;
  const CURRENT_AS_SELF = 16;
  const CURRENT_MODE_MASK = 240;
  const KEY_AS_PATHNAME = 0;
  const KEY_AS_FILENAME = 256;
  const FOLLOW_SYMLINKS = 512;
  const KEY_MODE_MASK = 3840;
  const NEW_CURRENT_AND_KEY = 256;
  const SKIP_DOTS = 4096;
  const UNIX_PATHS = 8192;

  protected $flags;

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/filesystemiterator.construct.php
   * )
   *
   * Constructs a new filesystem iterator from the path.
   *
   * @path       mixed   The path of the filesystem item to be iterated over.
   * @flags      mixed   Flags may be provided which will affect the behavior
   *                     of some methods. A list of the flags can found under
   *                     FilesystemIterator predefined constants. They can
   *                     also be set later with
   *                     FilesystemIterator::setFlags()
   *
   * @return     mixed   No value is returned.
   */
  public function __construct($path, $flags = null) {
    parent::__construct((string) $path);
    if ($flags === null) {
      $flags = FilesystemIterator::KEY_AS_PATHNAME |
               FilesystemIterator::CURRENT_AS_FILEINFO |
               FilesystemIterator::SKIP_DOTS;
    }
    $this->flags = $flags;
    $this->goPastDotsIfNeeded();
  }

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/filesystemiterator.current.php )
   *
   * Get file information of the current element.
   *
   * @return     mixed   The filename, file information, or $this depending
   *                     on the set flags. See the FilesystemIterator
   *                     constants.
   */
  public function current() {
    if ($this->flags & FilesystemIterator::CURRENT_AS_PATHNAME) {
      return $this->getPathname();
    } else if ($this->flags & FilesystemIterator::CURRENT_AS_SELF) {
      return $this;
    }
    // FilesystemIterator::CURRENT_AS_FILEINFO == 0
    return new SplFileInfo($this->getPathname());
  }

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/filesystemiterator.getflags.php
   * )
   *
   * Gets the handling flags, as set in FilesystemIterator::__construct() or
   * FilesystemIterator::setFlags().
   *
   * @return     mixed   The integer value of the set flags.
   */
  public function getFlags() {
    return $this->flags;
  }

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/filesystemiterator.key.php )
   *
   *
   * @return     mixed   Returns the pathname or filename depending on the
   *                     set flags. See the FilesystemIterator constants.
   */
  public function key() {
    if ($this->flags & FilesystemIterator::KEY_AS_FILENAME) {
      return $this->getFilename();
    }
    // FilesystemIterator::KEY_AS_PATHNAME == 0
    return $this->getPathname();
  }

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/filesystemiterator.next.php )
   *
   * Move to the next file.
   *
   * @return     mixed   No value is returned.
   */
  public function next() {
    parent::next();
    $this->goPastDotsIfNeeded();
  }

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/filesystemiterator.rewind.php )
   *
   * Rewinds the directory back to the start.
   *
   * @return     mixed   No value is returned.
   */
  public function rewind() {
    parent::rewind();
    $this->goPastDotsIfNeeded();
  }

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/filesystemiterator.setflags.php
   * )
   *
   * Sets handling flags.
   *
   * @flags      mixed   The handling flags to set. See the
   *                     FilesystemIterator constants.
   *
   * @return     mixed   No value is returned.
   */
  public function setFlags(int $flags) {
    $this->flags = $flags;
  }

  private function goPastDotsIfNeeded() {
    if ($this->flags & FilesystemIterator::SKIP_DOTS) {
      $f = parent::current();
      while ($f && $f->isDot()) {
        parent::next();
        $f = parent::current();
      }
    }
  }

  public function __toString() {
    return $this->getPathname();
  }
}
