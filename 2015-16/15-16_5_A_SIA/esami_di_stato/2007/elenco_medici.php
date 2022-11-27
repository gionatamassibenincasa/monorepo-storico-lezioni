<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8">
        <title>Elenco dei medici</title>
    </head>
    <body>
        <h1>Medici specialisti</h1>
        
        <ul>
<?php
$host = "localhost";
$user = "gionatamassibeni";
$pass = "";
$db   = "es_2007";
$port = 3306;

$conn = mysqli_connect($host, $user, $pass, $db, $port);

$query = "SELECT specializzazione " .
         "FROM medico " .
         "GROUP BY specializzazione " .
         "ORDER BY specializzazione;";

$specializzazioni = mysqli_query($conn, $query);

while ($row_sp = mysqli_fetch_assoc($specializzazioni)) {
    echo "<h2>Specializzazione: medico " . $row_sp['specializzazione'] . "</h2>\n";
    
    echo "<ul>\n";
    
    $query = "SELECT cf, nome, cognome " .
             "FROM medico " .
             "WHERE specializzazione = '" . $row_sp['specializzazione'] . "' " .
             "ORDER BY cognome;";
             
    $medici = mysqli_query($conn, $query);
    
    while($row_me = mysqli_fetch_assoc($medici)) {
        $cognome = $row_me['cognome'];
        $nome = $row_me['nome'];
        $cf = $row_me['cf'];
        
        echo '<li><a href="orario.php?cf=' . $cf . '">'
        . $cognome . " " . $nome . "</a></li>";
    }
    
    mysqli_free_result($medici);
    
    echo "</ul>\n";
}

mysqli_free_result($specializzazioni);            
mysqli_close($conn);

?>
        </ul>
    </body>
</html>