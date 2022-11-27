<?php
// Metodo di Erone per il calcolo della radice quadrata
function radq($x) {
  return radq_iter($x, 1.0);
}

function radq_iter($x, $stima) {
  if (suff_accurata($stima, $x))
    return $stima;
  return radq_iter($x, migliora_stima($stima, $x));
}

function suff_accurata($stima, $x) {
  return valore_assoluto(quadrato($stima) - $x) <= 1E-9;
}

function valore_assoluto($x) {
  if ($x >= 0) return $x;
  return -$x;
}

function quadrato($x) {
  return $x * $x;
}

function migliora_stima($stima, $x) {
  return valor_medio($stima, $x / $stima);
}

function valor_medio($x, $y) {
  return ($x + $y) / 2;
}

echo radq(4) . "\n";
echo radq(9) . "\n";
echo radq(16) . "\n";
echo radq(2) . "\n";
echo radq(3) . "\n";
?>