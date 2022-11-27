<?php

function selectionSort(&$a) {
    for ($last_ordered = 0;
            $last_ordered < count($a) - 2;
            $last_ordered++) {
                // trovare posizione elemento minimo
                // degli elementi non ordinati
                $pos_min = $last_ordered;
                for ($j = $pos_min + 1; $j < count($a); $j++) {
                    if ($a[$j] < $a[$pos_min]) {
                        $pos_min = $j;
                    }
                }
                $min = $a[$pos_min];
                $a[$pos_min] = $a[$last_ordered];
                $a[$last_ordered] = $min;
                
                print_r($a); 
            }
}

$a = array(5, 7, 1, 3, 9);
selectionSort($a);
print_r($a);

?>