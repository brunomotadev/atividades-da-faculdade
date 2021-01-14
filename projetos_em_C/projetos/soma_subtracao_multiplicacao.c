<<<<<<< HEAD
// CALCULA SOMA,SUBTRACAO E MULTIPLICACAO

#include <stdio.h>
#include <stdlib.h>

main () {
	float num1, num2, res_soma, res_subtracao, res_multi;
	
		printf ("Digite primeiro numero:\n");//LEITURA DE DADOS
		scanf ("%f",&num1);
		printf ("Digite segundo numero:\n");
		scanf ("%f",&num2);
		
		res_soma= num1+num2;//CALCULOS
		res_subtracao = num1-num2;
		res_multi = num1*num2;
		
		printf ("Resultado da soma: %.2f\n",res_soma);//EXIBE RESULTADOS
		printf ("Resultado da Subtracao: %.2f\n", res_subtracao); // %.2f = exibe 2 casas decimais
		printf ("Resultado da Multiplicacao: %.2f\n", res_multi);
		
		system ("PAUSE");//ESPERA INTERACAO PARA FINALIZAR O PROGRAMA
		return 0; //RESTAURA AO ESTADO INICIAL
	
	
}
=======
// CALCULA SOMA,SUBTRACAO E MULTIPLICACAO

#include <stdio.h>
#include <stdlib.h>

main () {
	float num1, num2, res_soma, res_subtracao, res_multi;
	
		printf ("Digite primeiro numero:\n");//LEITURA DE DADOS
		scanf ("%f",&num1);
		printf ("Digite segundo numero:\n");
		scanf ("%f",&num2);
		
		res_soma= num1+num2;//CALCULOS
		res_subtracao = num1-num2;
		res_multi = num1*num2;
		
		printf ("Resultado da soma: %.2f\n",res_soma);//EXIBE RESULTADOS
		printf ("Resultado da Subtracao: %.2f\n", res_subtracao); // %.2f = exibe 2 casas decimais
		printf ("Resultado da Multiplicacao: %.2f\n", res_multi);
		
		system ("PAUSE");//ESPERA INTERACAO PARA FINALIZAR O PROGRAMA
		return 0; //RESTAURA AO ESTADO INICIAL
	
	
}
>>>>>>> 42a3a07eeec6bd12e0bfa1b065eac34c9108b5d8
