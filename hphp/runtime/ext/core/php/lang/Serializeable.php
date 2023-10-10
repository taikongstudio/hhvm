<?hh

// This doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/class.serializable.php )
 *
 * Interface for customized serializing.
 *
 * Classes that implement this interface no longer support __sleep() and
 * __wakeup(). The method serialize is called whenever an instance needs to
 * be serialized. This does not have any side effects unless programmed inside
 * the method. When the data is unserialized the class is known and the
 * appropriate unserialize() method is called as a constructor instead of
 * calling __construct(). If you need to execute the standard constructor you
 * may do so in the method.
 *
 */
interface Serializable {
  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/serializable.serialize.php )
   *
   * Should return the string representation of the object.
   *
   * This method acts as the destructor of the object.
   *
   * @return     mixed   Returns the string representation of the object or
   *                     NULL
   */
  public function serialize(): ?string;
  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/serializable.unserialize.php )
   *
   * Called during unserialization of the object.
   *
   * This method acts as the constructor of the object. The __construct()
   * method will not be called after this method.
   *
   * @serialized mixed   The string representation of the object.
   *
   * @return     mixed   The return value from this method is ignored.
   */
  public function unserialize(string $serialized): void;
}
