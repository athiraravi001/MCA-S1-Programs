<?php
$dbhost = "localhost";
$dbuser = "root";
$dbpass = "";
$dbname = "employee";
$conn = mysqli_connect($dbhost, $dbuser, $dbpass, $dbname);

if (!$conn) {
    die("Could not connect");
}
$result = mysqli_query($conn, "SELECT * FROM emp");  

echo "<h2>Employee Records</h2>";

if (mysqli_num_rows($result) > 0) {
    echo "<table style='width: 50%; border-collapse: collapse;'>
                <tr style='background-color: #f2f2f2;'>
                    <th style='padding: 10px; border: 1px solid grey;'>Name</th>
                    <th style='padding: 10px; border: 1px solid grey;'>Email</th>
                    <th style='padding: 10px; border: 1px solid grey;'>Phone</th>
                </tr>";

    while ($row = mysqli_fetch_assoc($result)) {
        echo "<tr>
                <td style='padding: 10px; border: 1px solid grey;'>" . $row['name'] . "</td>
                <td style='padding: 10px; border: 1px solid grey;'>" . $row['email'] . "</td>
                <td style='padding: 10px; border: 1px solid grey;'>" . $row['phone'] . "</td>
              </tr>";
    }

    echo "</table>";
} else {
    echo "No records found.";
}

mysqli_close($conn);
?>
