<!DOCTYPE html>
<html>
<head><title>es_2013</title></head>
<body>
<form action="es_2013.php" method="get">
<select name="categoria">
<?php
$user="gionatamassibeni";
$pass="";
$host="localhost";
$db="es_2013";
$port=3306;

$conn=mysqli_connect($host,$user,$pass,$db,$port);

if (!$conn) {
    echo mysqli_error($conn);
}

$query="select descrizione from categoria";
$table=mysqli_query($conn,$query);
while($row=mysqli_fetch_assoc($table)) {
    echo '<option value="'.$row['descrizione'].'">' .
    $row['descrizione'] . '</option>'."\n";
}
?>
</select>
<input type="submit" value="submit"/>
</form>
</body>
</html>