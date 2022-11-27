<DOCTYPE html>
<html>
    <head>
        <meta charset="UTF-8">
        <title>Tabella utenti</title>
    </head>
    <body>
        <table>
            <tr>
                <th>Username</th>
                <th>Password</th>
            </tr>
<?php

$conn = mysqli_connect("localhost", "gionatamassibeni", "", "e3", 3306) 
    or die(mysqli_error());
    
$tabella = mysqli_query($conn, "SELECT * FROM users;");
while ($riga = mysqli_fetch_assoc($tabella)) {
?>
            <tr>
                <td><?php echo $riga['username']; ?></td>
                <td><?php echo $riga['password']; ?></td>
            </tr>

<?php
}
?>
        </table>
    </body>
</html>