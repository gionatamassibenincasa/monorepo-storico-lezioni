<!DOCTYPE <!DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Scacchiera</title>
    </head>
    <body>
        <table border="1px">
<?php
    $n = 8;
    for ($i = 1; $i <= $n; $i++) {
        echo "            <tr>\n";
        for ($j = 1; $j <= $n; $j++) {
            if (($i + $j) % 2 )
                echo "                <td width=\"25px\" height=\"25px\" style=\"color: white; background-color: black;\">$i, $j</td>";
            else
                echo "                <td  width=\"25px\" height=\"25px\">$i, $j</td>";
        }
        echo "            </tr>\n";
    }
?>
        </table>
    </body>
</html>