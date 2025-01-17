<?php
session_start();

if (!isset($_SESSION['username'])) {
    // Redirect to login page if the user is not logged in
    header("Location: login.php");
    exit();
}

if (isset($_POST['logout'])) {
    // Logout logic
    session_unset();
    session_destroy();
    header("Location: login.php");
    exit();
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Welcome</title>
</head>
<body>
    <center>
        <h1>Welcome, <?php echo $_SESSION['username']; ?>!</h1>
        <form action="" method="POST">
            <input type="submit" value="Logout" name="logout">
        </form>
    </center>
</body>
</html>
