<?php

$contador = (int) $_POST["numero"];
$i = 1;

while ($i <= $contador){
    echo "<p>Numero $i</p>";
    $i++;

}
echo "Ultimo valor variável i: $i";

?>