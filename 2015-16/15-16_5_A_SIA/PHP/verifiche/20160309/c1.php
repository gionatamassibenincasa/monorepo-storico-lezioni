<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Caricabatterie</title>
    </head>
    <body>
<?php
$host="127.0.0.1";
$user="gionatamassibeni";
$pass="";
$db="sim1";
$port=3306;

$conn = mysqli_connect($host,
                $user,
                $pass,
                $db,
                $port)
        or die(mysqli_error());
$query = "SELECT foto, nome, prezzo " .
         "FROM articolo";
$table = mysqli_query($conn, $query);
while ($row = mysqli_fetch_assoc($table)) {
	echo "<div>\n";
	echo '<img src="' . $row['foto'] . '" width="50px" height="50px">' . "\n";
	echo $row['nome'];
	echo " a solo " . $row['prezzo'] . " euro!\n";
	echo "</div>\n";

}

mysqli_free_result($table);
mysqli_close($conn);
?>
    </body>
</html>