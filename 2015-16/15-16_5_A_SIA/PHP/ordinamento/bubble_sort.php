<?php

function bubbleSort(&$a) {
    for($posElOrd1 = count($a) - 2; $posElOrd1 > 0; $posElOrd1--) {
        for($i = 0; $i <= $posElOrd1; $i++) {
            if($a[$i] > $a[$i+1]) {
                $appoggio = $a[$i];
                $a[$i] = $a[$i+1];
                $a[$i+1] = $appoggio;
            }
        }
        print_r($a);
    }
}

$a = array(5, 7, 1, 3, 9);
bubbleSort($a);
print_r($a);

?>