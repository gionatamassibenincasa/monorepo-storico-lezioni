<html>
  <head>
    <title>Esercizio</title>
  </head>
  <body>
    <?php if (isset($_GET["nome"])
              && isset($_GET["cognome"])
              && isset($_GET["cellulare"])) {
                echo "<table><tr><td>".$_GET["nome"]
                     ."</td><td>".$_GET["cognome"]
                     ."</td><td>".$_GET["cellulare"]
                     ."</td></tr></table>";
              } else {
                $form = '<form method="GET" action="' . $_SERVER['PHP_SELF'] . '">';
                $form .= '<label for="nome">Nome: </label><input name="nome" type="text"><br>';
                $form .= '<label for="cognome">Cognome: </label><input name="cognome" type="text"><br>';
                $form .= '<label for="cellulare">Cell: </label><input name="cellulare" type="text"><br>';
                $form .= '<button type="submit">Invia</button>';
                echo $form;
              }
              
  ?> 
  </body>
</html>