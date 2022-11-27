<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title>Login</title>
	</head>
	<body>
<?php
	function controllo_password($u, $p) {
		  $conn = new PDO("mysql:host=localhost;dbname=quinta", 'root', 'password');
		  // set the PDO error mode to exception
		  $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
		  $sql = "SELECT password FROM Utente WHERE username = '" .
					$u . "'";
		  $stmt = $conn->prepare($sql);
		  $stmt->execute();
		  // set the resulting array to associative
		  $result = $stmt->setFetchMode(PDO::FETCH_ASSOC);
		  $passwordNelDB = $stmt->fetch();
		  print_r($passwordNelDB);
		  if($passwordNelDB['password'] == md5($p)) {
			  echo "La password corrisponde<br>";
			  return true;
		  } else {
			  echo "La password NON corrisponde<br>";
			  return false;			  
		  }
	}

	if (isset ($_POST['username']) &&
		isset ($_POST['password']) &&
		controllo_password($_POST['username'], $_POST['password'])) {
			header("refresh:3;url:http://www.example.com/another-page.php");
			exit();
	}
?>

		<form action="<?php
	echo htmlspecialchars($_SERVER["PHP_SELF"]);
?>"
		method="POST">
		 <label for="username">Nome utente:</label>
		 <input type="text" id="username" name="username" required><br><br>
		 <label for="password">Password:</label>
		 <input type="password" id="password" name="password" required><br><br>
		 <button type="submit">Login</button>
		</form>
	</body>
</html>
