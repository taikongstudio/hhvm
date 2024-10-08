<?hh

function R10($t) :mixed{
    return str_repeat($t, 10);
}

function R500($t) :mixed{
    return str_repeat($t, 500);
}
<<__EntryPoint>> function main(): void {
$tests = vec[
    vec[ "", "811c9dc5" ],
    vec[ "a", "050c5d7e" ],
    vec[ "b", "050c5d7d" ],
    vec[ "c", "050c5d7c" ],
    vec[ "d", "050c5d7b" ],
    vec[ "e", "050c5d7a" ],
    vec[ "f", "050c5d79" ],
    vec[ "fo", "6b772514" ],
    vec[ "foo", "408f5e13" ],
    vec[ "foob", "b4b1178b" ],
    vec[ "fooba", "fdc80fb0" ],
    vec[ "foobar", "31f0b262" ],
    vec[ "\0", "050c5d1f" ],
    vec[ "a\0", "70772d5a" ],
    vec[ "b\0", "6f772bc7" ],
    vec[ "c\0", "6e772a34" ],
    vec[ "d\0", "6d7728a1" ],
    vec[ "e\0", "6c77270e" ],
    vec[ "f\0", "6b77257b" ],
    vec[ "fo\0", "408f5e7c" ],
    vec[ "foo\0", "b4b117e9" ],
    vec[ "foob\0", "fdc80fd1" ],
    vec[ "fooba\0", "31f0b210" ],
    vec[ "foobar\0", "ffe8d046" ],
    vec[ "ch", "6e772a5c" ],
    vec[ "cho", "4197aebb" ],
    vec[ "chon", "fcc8100f" ],
    vec[ "chong", "fdf147fa" ],
    vec[ "chongo", "bcd44ee1" ],
    vec[ "chongo ", "23382c13" ],
    vec[ "chongo w", "846d619e" ],
    vec[ "chongo wa", "1630abdb" ],
    vec[ "chongo was", "c99e89b2" ],
    vec[ "chongo was ", "1692c316" ],
    vec[ "chongo was h", "9f091bca" ],
    vec[ "chongo was he", "2556be9b" ],
    vec[ "chongo was her", "628e0e73" ],
    vec[ "chongo was here", "98a0bf6c" ],
    vec[ "chongo was here!", "b10d5725" ],
    vec[ "chongo was here!\n", "dd002f35" ],
    vec[ "ch\0", "4197aed4" ],
    vec[ "cho\0", "fcc81061" ],
    vec[ "chon\0", "fdf1479d" ],
    vec[ "chong\0", "bcd44e8e" ],
    vec[ "chongo\0", "23382c33" ],
    vec[ "chongo \0", "846d61e9" ],
    vec[ "chongo w\0", "1630abba" ],
    vec[ "chongo wa\0", "c99e89c1" ],
    vec[ "chongo was\0", "1692c336" ],
    vec[ "chongo was \0", "9f091ba2" ],
    vec[ "chongo was h\0", "2556befe" ],
    vec[ "chongo was he\0", "628e0e01" ],
    vec[ "chongo was her\0", "98a0bf09" ],
    vec[ "chongo was here\0", "b10d5704" ],
    vec[ "chongo was here!\0", "dd002f3f" ],
    vec[ "chongo was here!\n\0", "1c4a506f" ],
    vec[ "cu", "6e772a41" ],
    vec[ "cur", "26978421" ],
    vec[ "curd", "e184ff97" ],
    vec[ "curds", "9b5e5ac6" ],
    vec[ "curds ", "5b88e592" ],
    vec[ "curds a", "aa8164b7" ],
    vec[ "curds an", "20b18c7b" ],
    vec[ "curds and", "f28025c5" ],
    vec[ "curds and ", "84bb753f" ],
    vec[ "curds and w", "3219925a" ],
    vec[ "curds and wh", "384163c6" ],
    vec[ "curds and whe", "54f010d7" ],
    vec[ "curds and whey", "8cea820c" ],
    vec[ "curds and whey\n", "e12ab8ee" ],
    vec[ "cu\0", "26978453" ],
    vec[ "cur\0", "e184fff3" ],
    vec[ "curd\0", "9b5e5ab5" ],
    vec[ "curds\0", "5b88e5b2" ],
    vec[ "curds \0", "aa8164d6" ],
    vec[ "curds a\0", "20b18c15" ],
    vec[ "curds an\0", "f28025a1" ],
    vec[ "curds and\0", "84bb751f" ],
    vec[ "curds and \0", "3219922d" ],
    vec[ "curds and w\0", "384163ae" ],
    vec[ "curds and wh\0", "54f010b2" ],
    vec[ "curds and whe\0", "8cea8275" ],
    vec[ "curds and whey\0", "e12ab8e4" ],
    vec[ "curds and whey\n\0", "64411eaa" ],
    vec[ "line 1\nline 2\nline 3", "31ae8f83" ],
    vec[ "chongo <Landon Curt Noll> /\\../\\", "995fa9c4" ],
    vec[ "chongo <Landon Curt Noll> /\\../\\\0", "35983f8c" ],
    vec[ "chongo (Landon Curt Noll) /\\../\\", "5036a251" ],
    vec[ "chongo (Landon Curt Noll) /\\../\\\0", "97018583" ],
    vec[ "http://antwrp.gsfc.nasa.gov/apod/astropix.html", "b4448d60" ],
    vec[ "http://en.wikipedia.org/wiki/Fowler_Noll_Vo_hash", "025dfe59" ],
    vec[ "http://epod.usra.edu/", "c5eab3af" ],
    vec[ "http://exoplanet.eu/", "7d21ba1e" ],
    vec[ "http://hvo.wr.usgs.gov/cam3/", "7704cddb" ],
    vec[ "http://hvo.wr.usgs.gov/cams/HMcam/", "d0071bfe" ],
    vec[ "http://hvo.wr.usgs.gov/kilauea/update/deformation.html", "0ff3774c" ],
    vec[ "http://hvo.wr.usgs.gov/kilauea/update/images.html", "b0fea0ea" ],
    vec[ "http://hvo.wr.usgs.gov/kilauea/update/maps.html", "58177303" ],
    vec[ "http://hvo.wr.usgs.gov/volcanowatch/current_issue.html", "4f599cda" ],
    vec[ "http://neo.jpl.nasa.gov/risk/", "3e590a47" ],
    vec[ "http://norvig.com/21-days.html", "965595f8" ],
    vec[ "http://primes.utm.edu/curios/home.php", "c37f178d" ],
    vec[ "http://slashdot.org/", "9711dd26" ],
    vec[ "http://tux.wr.usgs.gov/Maps/155.25-19.5.html", "23c99b7f" ],
    vec[ "http://volcano.wr.usgs.gov/kilaueastatus.php", "6e568b17" ],
    vec[ "http://www.avo.alaska.edu/activity/Redoubt.php", "43f0245b" ],
    vec[ "http://www.dilbert.com/fast/", "bcb7a001" ],
    vec[ "http://www.fourmilab.ch/gravitation/orbits/", "12e6dffe" ],
    vec[ "http://www.fpoa.net/", "0792f2d6" ],
    vec[ "http://www.ioccc.org/index.html", "b966936b" ],
    vec[ "http://www.isthe.com/cgi-bin/number.cgi", "46439ac5" ],
    vec[ "http://www.isthe.com/chongo/bio.html", "728d49af" ],
    vec[ "http://www.isthe.com/chongo/index.html", "d33745c9" ],
    vec[ "http://www.isthe.com/chongo/src/calc/lucas-calc", "bc382a57" ],
    vec[ "http://www.isthe.com/chongo/tech/astro/venus2004.html", "4bda1d31" ],
    vec[ "http://www.isthe.com/chongo/tech/astro/vita.html", "ce35ccae" ],
    vec[ "http://www.isthe.com/chongo/tech/comp/c/expert.html", "3b6eed94" ],
    vec[ "http://www.isthe.com/chongo/tech/comp/calc/index.html", "445c9c58" ],
    vec[ "http://www.isthe.com/chongo/tech/comp/fnv/index.html", "3db8bf9d" ],
    vec[ "http://www.isthe.com/chongo/tech/math/number/howhigh.html", "2dee116d" ],
    vec[ "http://www.isthe.com/chongo/tech/math/number/number.html", "c18738da" ],
    vec[ "http://www.isthe.com/chongo/tech/math/prime/mersenne.html", "5b156176" ],
    vec[ "http://www.isthe.com/chongo/tech/math/prime/mersenne.html#largest", "2aa7d593" ],
    vec[ "http://www.lavarnd.org/cgi-bin/corpspeak.cgi", "b2409658" ],
    vec[ "http://www.lavarnd.org/cgi-bin/haiku.cgi", "e1489528" ],
    vec[ "http://www.lavarnd.org/cgi-bin/rand-none.cgi", "fe1ee07e" ],
    vec[ "http://www.lavarnd.org/cgi-bin/randdist.cgi", "e8842315" ],
    vec[ "http://www.lavarnd.org/index.html", "3a6a63a2" ],
    vec[ "http://www.lavarnd.org/what/nist-test.html", "06d2c18c" ],
    vec[ "http://www.macosxhints.com/", "f8ef7225" ],
    vec[ "http://www.mellis.com/", "843d3300" ],
    vec[ "http://www.nature.nps.gov/air/webcams/parks/havoso2alert/havoalert.cfm", "bb24f7ae" ],
    vec[ "http://www.nature.nps.gov/air/webcams/parks/havoso2alert/timelines_24.cfm", "878c0ec9" ],
    vec[ "http://www.paulnoll.com/", "b557810f" ],
    vec[ "http://www.pepysdiary.com/", "57423246" ],
    vec[ "http://www.sciencenews.org/index/home/activity/view", "87f7505e" ],
    vec[ "http://www.skyandtelescope.com/", "bb809f20" ],
    vec[ "http://www.sput.nl/~rob/sirius.html", "8932abb5" ],
    vec[ "http://www.systemexperts.com/", "0a9b3aa0" ],
    vec[ "http://www.tq-international.com/phpBB3/index.php", "b8682a24" ],
    vec[ "http://www.travelquesttours.com/index.htm", "a7ac1c56" ],
    vec[ "http://www.wunderground.com/global/stations/89606.html", "11409252" ],
    vec[ R10("21701"), "a987f517" ],
    vec[ R10("M21701"), "f309e7ed" ],
    vec[ R10("2^21701-1"), "c9e8f417" ],
    vec[ R10("\x54\xc5"), "7f447bdd" ],
    vec[ R10("\xc5\x54"), "b929adc5" ],
    vec[ R10("23209"), "57022879" ],
    vec[ R10("M23209"), "dcfd2c49" ],
    vec[ R10("2^23209-1"), "6edafff5" ],
    vec[ R10("\x5a\xa9"), "f04fb1f1" ],
    vec[ R10("\xa9\x5a"), "fb7de8b9" ],
    vec[ R10("391581216093"), "c5f1d7e9" ],
    vec[ R10("391581*2^216093-1"), "32c1f439" ],
    vec[ R10("\x05\xf9\x9d\x03\x4c\x81"), "7fd3eb7d" ],
    vec[ R10("FEDCBA9876543210"), "81597da5" ],
    vec[ R10("\xfe\xdc\xba\x98\x76\x54\x32\x10"), "05eb7a25" ],
    vec[ R10("EFCDAB8967452301"), "9c0fa1b5" ],
    vec[ R10("\xef\xcd\xab\x89\x67\x45\x23\x01"), "53ccb1c5" ],
    vec[ R10("0123456789ABCDEF"), "fabece15" ],
    vec[ R10("\x01\x23\x45\x67\x89\xab\xcd\xef"), "4ad745a5" ],
    vec[ R10("1032547698BADCFE"), "e5bdc495" ],
    vec[ R10("\x10\x32\x54\x76\x98\xba\xdc\xfe"), "23b3c0a5" ],
    vec[ R500("\x00"), "fa823dd5" ],
    vec[ R500("\x07"), "0c6c58b9" ],
    vec[ R500("~"), "e2dbccd5" ],
    vec[ R500("\x7f"), "db7f50f9" ],
];

$i = 0;
$pass = true;
foreach($tests as $test) {
    $result = hash('fnv132', $test[0]);
    if ($result != $test[1]) {
        echo "Iteration " . $i . " failed - expected '" . $test[1] . "', got '" . $result . "' for '" . $test[1] . "'\n";
        $pass = false;
    }
    $i++;
}

if($pass) {
    echo "PASS";
}
}
