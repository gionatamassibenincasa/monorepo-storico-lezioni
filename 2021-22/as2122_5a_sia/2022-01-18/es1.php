<!DOCTYPE html>
<html>
  <head>
    <title>Esercizio 1</title>
    <meta charset="utf-8">
  </head>
  <body>
<!--
  Crea una pagina web con una tabella di 5 righe e 5 colonne. I valori della tabella sono il prodotto dell’indice di riga per quello di colonna.
-->
    <table>
      <thead>
        <tr>
        <th></th>
<?php
  for($i = 0; $i < 5; $i++) {
    echo "<th>" . $i . "</th>";
  }
?>  
        </tr>
      </thead>
      <tboby>
<?php
  for ($riga = 0; $riga < 5; $riga++) {
    echo "<tr><th>" . $riga . "</th>";
    for ($colonna = 0; $colonna < 5; $colonna++) {
      echo "<td>" . ($riga * $colonna) . "</td>";
    }
    echo "</tr>\n";
  }
?>
      </tboby>
    </table>
  </body>
</html>