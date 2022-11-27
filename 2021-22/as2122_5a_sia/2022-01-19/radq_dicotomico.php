<?php
function radq_dicotomico($radicando, $a, $b) {
  $x = valor_medio($a, $b);
  if (($b - $a) <= 1E-9) return $x;
  if (quadrato($x) - $radicando < 0)
    return radq_dicotomico($radicando, $x, $b);
  else
    return radq_dicotomico($radicando, $a, $x);
}

function valor_medio($a, $b) {
  return ($a + $b) / 2;
}

function quadrato($x) {
  return $x * $x;
}


echo radq_dicotomico(1, 0, 1) . "\n";
echo radq_dicotomico(4, 0, 4) . "\n";
echo radq_dicotomico(9, 0, 9) . "\n";
echo radq_dicotomico(2, 0, 2) . "\n";
echo radq_dicotomico(100 * 100, 99.9, 100.1) . "\n";
?>