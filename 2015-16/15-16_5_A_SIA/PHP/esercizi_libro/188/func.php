<!DOCTYPE html>
<html>
    <head>
        
    </head>    
    <body>
<?php 
    $nome = $_GET['nome'];
    $compleanno = $_GET['compleanno'];
    $oggi = date('Y-m-d');
    if (substr($oggi,5) == substr($compleanno, 5)) {
        echo "Tanti auguri $nome!<br>";
        $annoDiNascita = substr($compleanno, 0, 4);
        $annoCorrente = substr($oggi, 0, 4);
        echo "Oggi compi " . ($annoCorrente - $annoDiNascita) . " anni.";
    } else {
        echo "Ciao $nome!";
    }

?>
    </body>
</html>