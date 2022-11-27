<?php
    $file_name = $_SERVER['SCRIPT_FILENAME'];
    $file_content = file_get_contents($file_name);
    $highlighted_content = highlight_string($file_content, true);
    echo $highlighted_content;
?>