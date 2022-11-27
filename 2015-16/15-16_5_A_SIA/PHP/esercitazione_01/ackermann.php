<!DOCTYPE html>
<html>
	<head>
		<meta charset="UTF-8">
		<title>Funzione di Ackermann</title>
	</head>
	<body>
		<table>
			<tr>
				<td><?php echo $_GET['m']; ?></td>
				<td><?php echo $_GET['n']; ?></td>
				<td>
<?php
function a($m, $n) {
	if ($m == 0)
		return $n + 1;
	elseif ($n == 0 && $m > 0)
		return a($m-1, 1);
	elseif ($n > 0 && $m > 0)
		return a($m-1, a($m, $n-1));
}
	echo a($_GET['m'], $_GET['n']);
?>
				</td>
			</tr>
		</table>
	</body>
</html>