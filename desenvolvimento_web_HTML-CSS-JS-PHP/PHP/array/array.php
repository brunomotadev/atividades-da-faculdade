<html>
	<head>
	
	</head>
	
	<body>
		<?php
			$nome_do_array = array("UNINOVE", "PHP", "Programação Web", "2015");
			print_r($nome_do_array);
			
			echo "<h2> Array Associativo</h2>";
			$aluno = array();
			$aluno["curso"] = "tads";
			$aluno["Nome"] = "Chuchu";
			$aluno["RA"] = "30610414";
		?>
		
		<form>
			Nome <input type="text" value="<?php echo $aluno["Nome"];?>" /><br>
			RA <input type="text" value="<?php echo $aluno["RA"];?>" /><br>
			Curso <input type="text" value="<?php echo $aluno["curso"];?>"/> <br>
			<input type="submit" value="Salvar" />
		</form>
		
		<?php
			require("cliente.php");
			//Criar uma nova instância
			$clieUm = new Cliente();
			$clieUm->nome = "Bruno Mota";
			$clieUm->cpf = "321332";
			$clieUm->rua = "Rua felicidade";
			$clieUm->bairro = "Vila Teste";
			$clieUm->imprimirDados();
		?>
	</body>
</html>