<?php
echo "<b><u><font size=4><u>REGISTRATION FORM</u></font></u></b><br><br>";

$fname = $_POST['txt1'];
$lname = $_POST['txt2'];
$age = $_POST['txt3'];
$addr = $_POST['txt4'];

echo "NAME : $fname $lname<br>";
echo "AGE : $age<br>";
echo "ADDRESS : $addr<br>";

$r = $_POST['rd'];
if ($r == "male") {
  echo "GENDER : Male<br>";
} else {
  echo "GENDER : Female<br>";
}

echo "LANGUAGES KNOWN : ";
foreach ($_POST['chk'] as $selected) {
  echo $selected . " ";
}
?>
