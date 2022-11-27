<?php
isset($_GET['data']) or die('Inserire la data');

$host = 'localhost';
$user = 'gionatamassibeni';
$pass = '';
$db   = 'es_stato_2014';
$port = 3306;

$conn = mysqli_connect($host, $user,
        $pass, $db, $port) or die('DB error');
$query = "SELECT MAX(ID) AS n FROM Attivita";
$table = mysqli_query($conn, $query);
$row = mysqli_fetch_assoc($table);

if (!isset($row)) {
    $id = 1;
} else {
    $id = $row['n'] + 1;
}
mysqli_free_result($table);

$query = "INSERT INTO Attivita " .
         "(ID, Descrizione, Strumenti, " .
         " Tirocinio) VALUES (" .
         $id . ", '" . $_GET['descrizione'] .
         "', '" . $_GET['strumenti'] . 
         "', " . $_GET['tirocinio_id'] .
         ")";
mysqli_query($conn, $query) or die ('Error');

mysqli_close($conn);
header('Location: punto_6_i.html');
?>