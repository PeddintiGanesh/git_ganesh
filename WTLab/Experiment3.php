
# Write a PHP script to merge two arrays and sort them as numbers, in descending order

<?php
// Define the arrays
$arr1 = [5, 3, 2];
$arr2 = [4, 2, 1];

// Merge the arrays
$mergedArray = array_merge($arr1, $arr2);

// Sort the merged array in descending order
rsort($mergedArray);

// Print the sorted array
print_r($mergedArray);
?>