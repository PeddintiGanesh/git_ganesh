
# Write a PHP script to print prime numbers between 1 -50

<?php
$num = 1;
while ($num <= 50) {
$count = 0;
for($i = 1; $i <= $num; $i++) {
if($num % $i == 0) {
$count++;
}
}
if($count <3) {
echo $num." ";
}
$num = $num +1;
}
?>