<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8">
		<title>Numeri casuali</title>
	</head>
	<body>
		<h1>Generatore di numeri pseudo-casuali</h1>
		<ul>
<?php
	for ($i = 0; $i < 10; $i++) {
		echo "<li>" . rand(1, 10) . "</li>\n";
	}
?>
		</ul>
	</body>
</html>
