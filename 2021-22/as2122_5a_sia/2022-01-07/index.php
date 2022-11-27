<html>
  <head>
    <title>PHP Test</title>
  </head>
  <body>
    <?php
     $i = 5;
     $c = 'a';
     $f = 3.14;
     echo "<h2>Visualizzare il valore di variabili</h2>\n";
     echo $i . "<br>\n";
     echo $c . "<br>\n";
     echo $f . "<br>\n";
     echo "<h2>Operazioni tra interi</h2>\n";
     $i1 = 7;
     $i2 = 3;
     echo $i1 . " + " . $i2 . " = " . ($i1 + $i2) . "<br>\n";
     echo $i1 . " - " . $i2 . " = " . ($i1 - $i2) . "<br>\n";
     echo "{$i1} * {$i2} = " . ($i1 * $i2) . "<br>\n";
     echo "{$i1} / {$i2} = " . ($i1 / $i2) . "<br>\n";
     echo "{$i1} % {$i2} = " . ($i1 % $i2) . "<br>\n";
     echo "<h2>Operazioni tra numeri in virgola mobile</h2>\n";
     $i1 = 7.33;
     $i2 = 3.14;
     echo $i1 . " + " . $i2 . " = " . ($i1 + $i2) . "<br>\n";
     echo $i1 . " - " . $i2 . " = " . ($i1 - $i2) . "<br>\n";
     echo "{$i1} * {$i2} = " . ($i1 * $i2) . "<br>\n";
     echo "{$i1} / {$i2} = " . ($i1 / $i2) . "<br>\n";
     echo "<h2>Operazioni tra stringhe</h2>\n";
     $s1 = "Ciao";
     $s2 = " mondo!";
     echo "\"{$s1}\" . \"{$s2}\" = \"" . ($s1 . $s2) . "\"<br>\n";
     echo "<h2>Operazioni tra valori logici</h2>\n";
     $falso = false;
     $vero = true;
     echo "<h3>Or - o - disgiunzione</h3>\n";
     echo "Falso || Falso = " . 
        ((false || false) ? "Vero" : "Falso") . "<br>\n";
     echo "Falso || Vero = " . 
        ((false || true) ? "Vero" : "Falso") . "<br>\n";
     echo "Vero || Falso = " . 
        ((true || false) ? "Vero" : "Falso") . "<br>\n";
     echo "Vero || Vero = " . 
        ((true || true) ? "Vero" : "Falso") . "<br>\n";
     echo "<h3>And - e - congiunzione</h3>\n";
     echo "Falso && Falso = " . 
        ((false && false) ? "Vero" : "Falso") . "<br>\n";
     echo "Falso && Vero = " . 
        ((false && true) ? "Vero" : "Falso") . "<br>\n";
     echo "Vero && Falso = " . 
        ((true && false) ? "Vero" : "Falso") . "<br>\n";
     echo "Vero && Vero = " . 
        ((true && true) ? "Vero" : "Falso") . "<br>\n";
     echo "<h3>Not - non - negazione</h3>\n";
     echo "!Falso = " . 
        ((!false) ? "Vero" : "Falso") . "<br>\n";
     echo "!Vero = " . 
        ((!true) ? "Vero" : "Falso") . "<br>\n";
     
  ?>
  </body>
</html>
