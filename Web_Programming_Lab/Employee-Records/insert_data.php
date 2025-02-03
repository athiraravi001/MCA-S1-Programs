<?php
$dbhost = "localhost";
$dbuser = "root";
$dbpass = "";
$dbname = "employee";
$conn = mysqli_connect($dbhost, $dbuser, $dbpass, $dbname);

if (!$conn) {
    die("Could not connect");
}

if (isset($_POST['submit'])) {  
    $name = $_POST['name'];
    $email = $_POST['email'];
    $phone = $_POST['phone'];

    $sql = "INSERT INTO emp(name, email, phone) VALUES ('$name', '$email', '$phone')";

    if (mysqli_query($conn, $sql)) {
        echo "Record inserted successfully.";
        header("Location: display_data.php");
        exit();
    } else {
        echo "Record not inserted.";
    }
}

mysqli_close($conn);
?>
