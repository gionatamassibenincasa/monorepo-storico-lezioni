<?php

$conn = mysqli_connect(
    "localhost",
    "gionatamassibeni",
    "",
    "es_2007");
$query = "SELECT inizio, fine " .
         "FROM fascia_oraria " .
         "GROUP BY inizio, fine " .
         "ORDER BY inizio";
$res = mysqli_query($conn, $query);
while ($row = mysqli_fetch_assoc($res)) {
    echo $row['inizio'] . "-" . $row['fine'] . "\n";
}

?>