<!DOCTYPE html>
<html>

<head>
    <meta charset="utf-8" />
    <title>esame di stato</title>
</head>

<body>
    <!-- Il mio messaggio nascosto -->
    <form action="es_2013.php" method="get">
        <select name="merce">
<?php

$user="gionatamassibeni";
$pass="";
$host="localhost";
$db="es_2013";
$port=3306;

$conn=mysqli_connect($host,$user,$pass,$db,$port);

$query='select m.descrizione ' .
       'from merce as m, ' .
       'categoria as c '.
       'where m.categoria=c.id_categoria AND ' .
       "c.descrizione = '" . $_GET['categoria']. "'";

$table=mysqli_query($conn,$query);

while ($row=mysqli_fetch_assoc($table)) {
    echo '<option value="' . $row[ 'descrizione']. '">' .
    $row[ 'descrizione'] . '</option>';

}
?>
        </select>
    </form>
</body>
</html>
