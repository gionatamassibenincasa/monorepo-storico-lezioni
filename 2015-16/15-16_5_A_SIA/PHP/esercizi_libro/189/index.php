<!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Esercizio 189 pag. 629 - Tavola pitagorica</title>
    </head>
    <body>
        <table border="1">
            
<?php
    for ($i = 1; $i <= 10; $i++) {
        echo "            <tr>\n";
        for ($j = 1; $j <= 10; $j++) {
            $d = $i * $j;
            echo "                <td>$d</td>\n";
        }
        echo "            </tr>\n";
    }
?>

        </table>
        
    </body>
</html>