<!DOCTYPE html>
<html>
    <head>
        
    </head>    
    <body>
<?php 
    $numero = $_GET['numero'];
    for ($div_candidato = 1;
         $div_candidato <= $numero / 2;
         $div_candidato++) {
             if (($numero % $div_candidato) == 0) {
                 $divisori[] = $div_candidato;
             }
    }
    if (count($divisori) == 1) {
        echo "        <p>Numero primo</p>\n";
    } else {
        array_shift($divisori);
        echo "        <ul>\n";
        foreach ($divisori as $divisore) {
            echo "            <li>$divisore</li>\n";
        }
        echo "        </ul>\n";
    }
         
?>
    </body>
</html>