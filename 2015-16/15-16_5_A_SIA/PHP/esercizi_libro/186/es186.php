<!DOCTYPE html>
<html>
    <head>
        
    </head>    
    <body>
<?php 
    $mesi =
    array('Gen', 'Feb', 'Mar',
          'Apr', 'Mag', 'Giu',
          'Lug', 'Ago', 'Set',
          'Ott', 'Nov', 'Dic');
    
    if ($_GET['mese'] > 0 &&
        $_GET['mese'] < 13) {
            echo $mesi[$_GET['mese'] - 1];
        }
?>
    </body>
</html>