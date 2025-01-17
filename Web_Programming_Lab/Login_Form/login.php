<?php
include("dbconn.php");
session_start();

if(isset($_POST['submit'])) {
    $username = $_POST['uname'];
    $password = $_POST['pwd'];
    
    // Query the database for the user credentials
    $sql = "SELECT * FROM tbl_login WHERE username = '$username' AND password = '$password'";
    $query = mysqli_query($conn, $sql);
    
    if (mysqli_num_rows($query) == 1) {
        // Fetch user data and start session
        $_SESSION['username'] = $username;
        header("Location: welcome.php"); // Redirect to the welcome page
        exit();
    } else {
        echo "<script>alert('Invalid username or password');</script>";
    }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>
</head>
<body>
<form action="" method="POST">
<center>
<h1>Login Form</h1>

<table border="2">

   <tr>
     <td>Username : </td>
     <td><input type="text" name="uname"></td>
   </tr> 

   <tr>
     <td>Password : </td>
     <td><input type="password" name="pwd"></td>
   </tr>

   <tr>
     <td colspan="2" align="center">
        <input type="submit" value="Login" name="submit">
     </td>
   </tr>

</table>
</center>
</form>
</body>
</html>