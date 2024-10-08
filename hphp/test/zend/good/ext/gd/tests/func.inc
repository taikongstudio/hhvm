<?hh

/**
 * Tests that an in-memory image equals a PNG file.
 *
 * It checks for equal image sizes, and whether any pixels are different.
 * The textual result is printed, so the EXPECT section should contain the line
 * "The images are equal."
 *
 * If the PNG file does not exists, or the images are not equal, a diagnostic
 * message is printed, and the actual file is stored right beside the temporary
 * .php test file with the extension .out.png, to be able to manually inspect
 * the result.
 *
 * @param string $filename
 * @param resource $actual
 * @return void
 */
function test_image_equals_file($filename, $actual)
{
  if (!file_exists($filename)) {
    echo "The expected image does not exist.\n";
    save_actual_image($actual);
    return;
  }
  $actual = test_to_truecolor($actual);
  $expected = imagecreatefrompng($filename);
  $expected = test_to_truecolor($expected);
  $exp_x = imagesx($expected);
  $exp_y = imagesy($expected);
  $act_x = imagesx($actual);
  $act_y = imagesy($actual);
  if ($exp_x != $act_x || $exp_y != $act_y) {
    echo "The image size differs: expected {$exp_x}x{$exp_y}, got {$act_x}x{$act_y}.\n";
    save_actual_image($actual);
    return;
  }
  $pixels_changed = 0;
  for ($y = 0; $y < $exp_y; $y++) {
    for ($x = 0; $x < $exp_x; $x ++) {
      $exp_c = imagecolorat($expected, $x, $y);
      $act_c = imagecolorat($actual, $x, $y);
      if ($exp_c != $act_c) {
        $pixels_changed++;
      }
    }
  }
  if (!$pixels_changed) {
    echo "The images are equal.\n";
  } else {
    echo "The images differ in {$pixels_changed} pixels.\n";
    save_actual_image($actual);
  }
}

/**
 * Returns the truecolor version of an image.
 *
 * @param resource $image
 * @return resource
 */
function test_to_truecolor($image)
{
  if (imageistruecolor($image)) {
    return $image;
  } else {
    $width = imagesx($image);
    $height = imagesy($image);
    $result = imagecreatetruecolor($width, $height);
    imagecopy($result, $image, 0,0, 0,0, $width, $height);
    return $result;
  }
}

/**
 * Saves an actual image to disk.
 *
 * The image is saved right beside the temporary .php test file with the
 * extension .out.png.
 *
 * @param resource $image
 * @return void
 */
function save_actual_image($image)
{
  $pathinfo = pathinfo(\HH\global_get('_SERVER')['SCRIPT_FILENAME']);
  $filename = "{$pathinfo['dirname']}/{$pathinfo['filename']}.out.png";
  imagepng($image, $filename);
}
