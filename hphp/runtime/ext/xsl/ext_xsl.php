<?hh
// generated by idl-to-hni.php

/* The XSLTProcessor class.
 */
<<__NativeData>>
class XSLTProcessor {
  /* Creates a new XSLTProcessor object.
   */
  public function __construct() {}

  /* Gets a parameter if previously set by XSLTProcessor::setParameter().
   * @param string $namespaceURI - The namespace URI of the XSLT parameter.
   * @param string $localName - The local name of the XSLT parameter.
   * @return mixed - The value of the parameter (as a string), or FALSE if it's
   * not set.
   */
  <<__Native>>
  public function getParameter(?string $namespaceURI,
                        string $localName): mixed;

  /* Get security preferences.
   * @return int - Security preferences.
   */
  <<__Native>>
  public function getSecurityPrefs(): int;

  /* This method determines if HHVM was built with the EXSLT library.
   * @return bool - Returns TRUE on success or FALSE on failure.
   */
  public function hasExsltSupport(): bool {
    return true;
  }

  /* This method imports the stylesheet into the XSLTProcessor for
   * transformations.
   * @param object $stylesheet - The imported style sheet as a DOMDocument or
   * SimpleXMLElement object.
   */
  <<__Native>>
  public function importStylesheet(object $stylesheet): void;

  /* This method enables the ability to use PHP functions as XSLT functions
   * within XSL stylesheets.
   * @param mixed $funcs - Use this parameter to only allow certain functions to
   * be called from XSLT. This parameter can be either a string (a function
   * name) or an array of functions.
   */
  <<__Native>>
  public function registerPHPFunctions(mixed $funcs = null): void;

  /* Removes a parameter, if set. This will make the processor use the default
   * value for the parameter as specified in the stylesheet.
   * @param string $namespaceURI - The namespace URI of the XSLT parameter.
   * @param string $localName - The local name of the XSLT parameter.
   * @return bool - Returns TRUE on success or FALSE on failure.
   */
  <<__Native>>
  public function removeParameter(?string $namespaceURI,
                           string $localName): bool;

  /* Sets the value of one or more parameters to be used in subsequent
   * transformations with XSLTProcessor. If the parameter doesn't exist in the
   * stylesheet it will be ignored.
   * @param string $namespaceURI - The namespace URI of the XSLT parameter.
   * @param mixed $localName - The local name of the XSLT parameter, or an array
   * of name => value pairs.
   * @param mixed $value - The new value of the XSLT parameter.
   * @return bool - Returns TRUE on success or FALSE on failure.
   */
  <<__Native>>
  public function setParameter(?string $namespaceURI,
                        mixed $localName,
                        mixed $value = null): bool;

  /* Sets the file to output profiling information when processing a stylesheet.
   * @param string $filename - Path to the file to dump profiling information.
   * @return bool - Returns TRUE on success or FALSE on failure.
   */
  <<__Native>>
  public function setProfiling(string $filename): bool;

  /* Set security preferences.
   * @param int $securityPrefs - Security preferences.
   * @return int - Previous security preferences.
   */
  <<__Native>>
  public function setSecurityPrefs(int $securityPrefs): int;

  /* Transforms the source node to a DOMDocument applying the stylesheet given
   * by the XSLTProcessor::importStylesheet() method.
   * @param object $doc - The node to be transformed.
   * @return mixed - The resulting DOMDocument or FALSE on error.
   */
  <<__Native>>
  public function transformToDoc(object $doc): mixed;

  /* Transforms the source node to an URI applying the stylesheet given by the
   * XSLTProcessor::importStylesheet() method.
   * @param object $doc - The document to transform.
   * @param string $uri - The target URI for the transformation.
   * @return mixed - Returns the number of bytes written or FALSE if an error
   * occurred.
   */
  <<__Native>>
  public function transformToURI(object $doc,
                          string $uri): mixed;

  /* Transforms the source node to a string applying the stylesheet given by the
   * XSLTProcessor::importStylesheet() method.
   * @param object $doc - The transformed document.
   * @return mixed - The result of the transformation as a string or FALSE on
   * error.
   */
  <<__Native>>
  public function transformToXML(object $doc): mixed;
}
