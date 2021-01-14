

<?php
echo "<table border=\"1\">
<tr>";
$valor = "";
for($a = 1; $a < 11; $a++) {
echo "<td>"; 
for($i = 0; $i < 11; $i++) {
echo "$a x $i=";
echo $a*$i."<br />";
}
echo "</td>";
}
echo "</tr>
</table>";
?>



