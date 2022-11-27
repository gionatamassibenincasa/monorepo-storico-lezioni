<html lang="it">
  <head>
    <title>PHP Test</title>
  </head>
  <body>
    <?php 
    $nomi = array("Felisia", "Gabriele", "Jacopo", "Michele", "Sara");
    echo "<ul>\n";
    for ($i = 0; $i < count($nomi); $i++) {
      echo "<li>" . $nomi[$i] . "</li>\n";
    }
    echo "</ul>\n";

    $account["username"] = "Topolino";
    $account["password"] = "Minni";

    echo "<p>" . var_dump($nomi) . "</p>";
    echo "<p>" . var_dump($account) . "</p>";
    ?> 
  </body>
</html>