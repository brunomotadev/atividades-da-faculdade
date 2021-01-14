<?php

$valor = (float) $_POST["valor"];
$quantidade = (int) $_POST ["qtd"];


$valorParcela = $valor / $quantidade;

while($quantidade > 0){
    echo "<p>Valor parcela $quantidade: $valorParcela</p>";
    $quantidade--;
}

echo '<button><a href="index.html">Voltar</a></button>';
?>