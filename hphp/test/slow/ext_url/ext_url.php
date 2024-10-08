<?hh

function VS($x, $y) :mixed{
  var_dump($x === $y);
  if ($x !== $y) { echo "Failed: $y\n"; echo "Got: $x\n";
                   var_dump(debug_backtrace()); }
}
function VERIFY($x) :mixed{ VS($x, true); }

//////////////////////////////////////////////////////////////////////

function test_base64_decode() :mixed{
  VS(base64_decode("VGhpcyBpcyBhbiBlbmNvZGVkIHN0cmluZw=="),
     "This is an encoded string");
  VS(base64_decode("BgAYdjk="), "\006\0\030v9");
  VERIFY(base64_decode("dGVzdA==") !==
               base64_decode("dGVzdA==CORRUPT"));
}

function test_base64_encode() :mixed{
  VS(base64_encode("This is an encoded string"),
     "VGhpcyBpcyBhbiBlbmNvZGVkIHN0cmluZw==");
  VS(base64_encode("\006\0\030v9"), "BgAYdjk=");
}

function test_get_meta_tags() :mixed{
  $ret = get_meta_tags(__DIR__."/get_meta_tags.html");
  VS(count($ret), 4);
  VS($ret['author'], "name");
  VS($ret['keywords'], "php documentation");
  VS($ret['description'], "a php manual");
  VS($ret['geo_position'], "49.33;-86.59");
}

function test_http_build_query() :mixed{
  $data = dict["foo" => "bar", "baz" => "boom", "cow" => "milk",
                           "php" => "hypertext processor"];
  VS(http_build_query($data),
     "foo=bar&baz=boom&cow=milk&php=hypertext+processor");
  VS(http_build_query($data, "", "&amp;"),
     "foo=bar&amp;baz=boom&amp;cow=milk&amp;php=hypertext+processor");

  $data = dict[
    0 => 'foo',
    1 => 'bar',
    2 => 'baz',
    3 => 'boom',
    'cow' => 'milk',
    'php' => 'hypertext processor'
  ];
  VS(http_build_query($data),
     "0=foo&1=bar&2=baz&3=boom&cow=milk&php=hypertext+processor");
  VS(http_build_query($data, "myvar_"),
     "myvar_0=foo&myvar_1=bar&myvar_2=baz&myvar_3=boom&cow=milk&".
     "php=hypertext+processor");

  $data = dict[
    'user' => dict['name' => 'Bob Smith',
                    'age' => 47,
                    'sex' => 'M',
                    'dob' => '5/12/1956'],
    'pastimes' => vec['golf', 'opera', 'poker', 'rap'],
    'children' => dict['bobby' => dict['age' => 12,
                                         'sex' => 'M'],
                        'sally' => dict['age' => 8,
                                         'sex' => 'F']],
    0 => 'CEO'
  ];
  VS(http_build_query($data, "flags_"),
     "user%5Bname%5D=Bob+Smith&user%5Bage%5D=47&user%5Bsex%5D=M&".
     "user%5Bdob%5D=5%2F12%2F1956&pastimes%5B0%5D=golf&".
     "pastimes%5B1%5D=opera&pastimes%5B2%5D=poker&".
     "pastimes%5B3%5D=rap&children%5Bbobby%5D%5Bage%5D=12&".
     "children%5Bbobby%5D%5Bsex%5D=M&children%5Bsally%5D%5Bage%5D=8&".
     "children%5Bsally%5D%5Bsex%5D=F&flags_0=CEO");

  $obj = new stdClass;
  $obj->foo = 'bar';
  $obj->baz = 'boom';
  VS(http_build_query($obj), "foo=bar&baz=boom");

  VS(http_build_query(Map { 'a' => 'b' }), "a=b");
}

function test_parse_url() :mixed{
  $url = "http://username:password@hostname/path?arg=value#anchor";
  VS(print_r(parse_url($url), true),
     "Dict\n".
     "(\n".
     "    [scheme] => http\n".
     "    [host] => hostname\n".
     "    [user] => username\n".
     "    [pass] => password\n".
     "    [path] => /path\n".
     "    [query] => arg=value\n".
     "    [fragment] => anchor\n".
     ")\n");
}

function test_rawurldecode() :mixed{
  VS(rawurldecode("foo%20bar%40baz"), "foo bar@baz");
  VS(rawurldecode("foo+bar%40baz"), "foo+bar@baz");
}

function test_rawurlencode() :mixed{
  VS(rawurlencode("foo bar@baz"), "foo%20bar%40baz");
}

function test_urldecode() :mixed{
  VS(urldecode("foo+bar%40baz"), "foo bar@baz");
}

function test_urlencode() :mixed{
  VS(urlencode("foo bar@baz"), "foo+bar%40baz");
}


<<__EntryPoint>>
function main_ext_url() :mixed{
test_base64_decode();
test_base64_encode();
test_get_meta_tags();
test_http_build_query();
test_parse_url();
test_rawurldecode();
test_rawurlencode();
test_urldecode();
test_urlencode();
}
