<?php
//echo $_POST['username'] . " " . $_POST['password'];
if (!isset($_POST['username']) or
    !isset($_POST['password']) )
    die('Username o password non presenti.');

//Connect to the database
$host = "localhost";
$user = "gionatamassibeni"; //Your Cloud 9 username
$pass = "";                 //Remember, there is NO password by default!
$db = "e3";                 //Your database name you want to connect to
$port = 3306;               //The port #. It is always 3306
    
$connection = mysqli_connect($host, $user, $pass, $db, $port)or die(mysql_error());
$user = $_POST['username'];

//And now to perform a simple query to make sure it's working
$query = "SELECT password FROM users WHERE username LIKE '$user'";
$result = mysqli_query($connection, $query);

if ($row = mysqli_fetch_assoc($result)) {
    if ($row['password'] == $_POST['password']) {
        header('Location: benvenuto.html');
    } else {
        header('Location: index.html');
    }
} else {
    header('Location: index.html');
}


?>