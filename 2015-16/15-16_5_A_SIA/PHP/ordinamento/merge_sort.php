<?php

function is_sorted(&$a) {
	$n = count($a);
	for ($i = 0; $i < $n-1; $i++)
		if ($a[$i] > $a[$i+1])
			return false;
	return true;
}

function print_array(&$a, $text = "Vettore iniziale", $lr = "") {
	$n = count($a);
	if ($n < 1)
		return;
	echo "<h2>$text $lr</h2>\n";
	echo "<table border=\"1\">\n\t<tr>\n";
	for ($i = 0; $i < $n; $i++)
		echo "\t\t<td>" . $a[$i] . "</td>\n";
	echo "\t</tr>\n</table>\n";
}

function merge_sort(&$a, $l = 0, $r = -1, $tmp_v = array()) {
	// gestisce la prima chiamata, quella senza argomenti
	if ($r == -1) {
		$r = count($a) - 1;
		$tmp_v = $a;
	}
	
	// Distingue i casi elementari (1 o 2 elementi)
	if ($l == $r) {
		$pa = array_slice($a,$l,$r-$l+1);
		print_array($pa, "Dividi - caso elementare 1 elemento", "($l $r)");
	} elseif ($r == $l + 1) {
		$pa = array_slice($a,$l,$r-$l+1);
		print_array($pa, "Dividi - caso elementare 2 elementi", "($l $r)");
		if ($a[$l] > $a[$r]) {
			$tmp = $a[$r];
			$a[$r] = $a[$l];
			$a[$l] = $tmp;
		}
		$pa = array_slice($a,$l,$r-$l+1);
		print_array($pa, "Ordina - caso elementare 2 elementi", "($l $r)");
	} elseif ($l != $r) { // Caso non elementare
		$pa = array_slice($a,$l,$r-$l+1);
		print_array($pa, "Dividi - caso non elementare elementi", "($l $r)");
		$center = round(($l+$r)/2,0,PHP_ROUND_HALF_DOWN);
		merge_sort($a, $l, $center);
		merge_sort($a, $center+1, $r);
	}
	// merge
	$n = $r - $l + 1;
	$c =round($n/2,0);
	for ($i = 0; $i < $n; $i++)
		$tmp_v[$i] = $a[$l+$i];
	
	$i = $j = 0;
	while($i < $c && $j < $n - $c) {
		if($tmp_v[$i] < $tmp_v[$c + $j]) {
			$a[$l+$i+$j] = $tmp_v[$i];
			$i++;
		} else {
			$a[$l+$i+$j] = $tmp_v[$c + $j];
			$j++;
		}
	}
	while($i < $c) {
		$a[$l+$i+$j] = $tmp_v[$i];
		$i++;
	}
	$pa = array_slice($a,$l,$r-$l+1);
	print_array($pa, "Fondi ", "($l $r)");
}
define(N, 8);
for ($j = 0; $j < N; $j++)
	$v[$j] = rand(0, N-1);
print_array($v);
merge_sort($v);
print_array($v, "Vettore ordinato");
?>
