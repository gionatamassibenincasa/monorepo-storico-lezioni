<html>
  <head>
    <title>Estrazioni</title>
    <meta charset="utf-8">
  </head>
  <body>
<?php
  if (isset($_GET['estrazioni'])) {
    $htmlTabella = '<table style="border: 1px solid red"><thead><tr><th>N. estrazione</th><th>Valore</th></tr></thead><tbody>';
    for($riga = 1; $riga <= $_GET['estrazioni']; $riga++) {
      $htmlTabella .= '<tr><td>' . $riga . '</td><td>' . rand(1, 90) . '</td></tr>';
    }
    $htmlTabella .= "</tbody></table>";
    echo $htmlTabella;
  } else {
    $htmlForm = '<form method="GET" action="'. $_SERVER['PHP_SELF'] . '">';
    $htmlForm .= '<label for="estrazioni">Numero di estrazioni</label>';
    $htmlForm .= '<input name="estrazioni" type="number" min="1" max="90">';
    $htmlForm .= '<button type="submit">Invia</button>';
    $htmlForm .= '</form>';
    echo $htmlForm;
  }
?> 
  </body>
</html>
