<?php

function insertionSort(&$a) {
    for ($last_ordered = 1;
            $last_ordered < count($a) - 1;
            $last_ordered++) {
                $valore = $a[$last_ordered];
                $pos = $last_ordered - 1;
                while ($pos >= 0 && $valore < $a[$pos]) {
                    $a[$pos + 1] = $a[$pos];
                    $pos--;
                }
                $a[$pos + 1] = $valore;
            }
}

$a = array(5, 7, 1, 3, 9);
insertionSort($a);
print_r($a);

?>