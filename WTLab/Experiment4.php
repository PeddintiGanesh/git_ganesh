
# Write a PHP script that reads data from one file and write into another file.

<?php
$file = "data1.txt"; // Corrected file names with proper extensions
$copy = "data2.txt"; // Corrected file names with proper extensions
if (copy($file, $copy)) {
echo "Copied $file to $copy";
} else {
echo "Failed to copy $file to $copy";
}
?>