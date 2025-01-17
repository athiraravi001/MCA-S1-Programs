<?php
$dbhost="localhost";
$dbuser="root";
$dbpass="";
$dbname="dblogin";
$conn=mysqli_connect($dbhost,$dbuser,$dbpass,$dbname);
if($conn) {
echo "Successfully Connected<br>";
}
else{
    echo "Not Connected";
}
?>
