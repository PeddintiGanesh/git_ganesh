<?php
// Define the string
$string = "Hello, welcome to the world of PHP programming!";

// a. Find the length of the string
$length = strlen($string);
echo "Length of the string: " . $length . "\n";

// b. Count the number of words in the string
$wordCount = str_word_count($string);
echo "Number of words in the string: " . $wordCount . "\n";

// c. Reverse the string
$reversedString = strrev($string);
echo "Reversed string: " . $reversedString . "\n";

// d. Search for a specific string
$searchString = "PHP";
$position = strpos($string, $searchString);

if ($position !== false) {
    echo "The string '$searchString' was found at position: " . $position . "\n";
} else {
    echo "The string '$searchString' was not found.\n";
}
?>