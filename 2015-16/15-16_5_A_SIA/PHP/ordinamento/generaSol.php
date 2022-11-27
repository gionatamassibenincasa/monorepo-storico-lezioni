<?php

function generaSol(&$a, $pos = 0) {
    if (pos >= count($a))
        return;
    $a[$pos] = 0;
    generaSol($a, $pos + 1);
    print_r($a);
    $a[$pos] = 1;
    generaSol($a, $pos + 1);
    print_r($a);
}

$v=array(0,0,0,0);
generaSol($v);
?>