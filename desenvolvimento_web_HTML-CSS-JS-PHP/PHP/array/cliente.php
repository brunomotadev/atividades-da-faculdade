<?php
	class Cliente{
		var $nome;
		var $cpf;
		var $rua;
		var $bairro;
		
		function imprimirDados() {
			echo "<p>Nome: ". $this->nome . "</p> ";
			echo "<p>Cpf: " . $this->cpf . "</p> ";
			echo "<p>Rua: " . $this->rua . "</p> ";
			echo "<p>Bairro" . $this->bairro . "</p> ";
		}
	}

?>