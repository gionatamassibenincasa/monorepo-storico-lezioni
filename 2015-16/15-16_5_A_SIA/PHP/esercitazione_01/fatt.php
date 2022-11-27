<!DOCTYPE html>
<html>
	<head>
		<meta charset="UTF-8">
		<title>Funzione fattoriale</title>
	</head>
	<body>
		<table>
			<tr>
				<td><?php echo $_GET['n']; ?></td>
				<td>
<?php
function f($n) {
	if ($n == 0)
		return 1;
	else
		return $n * f($n-1);
}
echo f($_GET['n']);
?>
				</td>
			</tr>
		</table>
	</body>
</html>