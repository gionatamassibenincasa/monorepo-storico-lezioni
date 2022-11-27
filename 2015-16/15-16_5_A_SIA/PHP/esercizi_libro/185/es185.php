<!DOCTYPE html>
<html>
    <head>
        <title>Pagina dinamica dell'esercizio 185</title>
    </head>
    <body>
        <p>
<?php
    /*if($_GET['sesso'] == 'M')
        echo "Egregio signore ";
    elseif ($_GET['sesso'] == 'F')
        echo "Gentilissima signora ";
    else
        echo "Salve ";
    */
    switch($_GET['sesso']) {
        case 'M':
            echo "Egregio signore ";
            break;
        case 'F':
            echo "Gentilissima signora ";
            break;
        default:
            echo "Salve ";
    }
        
    echo $_GET['nome'];
?>
        </p>
    </body>
</html>