#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int soma, divisao, multiplicacao, subtracao, opcao, num1, num2;
	
	printf("Digite primeiro número: ");
		scanf("%d", &num1);
	
	printf("Digite segundo numero: ");
		scanf("%d", &num2);
	
	soma = num1 +num2;
	divisao = num1 / num2;
	multiplicacao = num1 * num2;
	subtracao = num1 - num2;
	
	printf("Escolha o tipo de operacao: \n\n\n 1- Multiplicacao\n 2 - Divisao \n 3 - Soma \n 4 - Subtracao");

		scanf("%d", &opcao);
	
		if (opcao == 1){
		 printf ("Resultado da Multiplicacao: %d\n", multiplicacao);
			}
			
			else if (opcao == 2){
			 printf ("Resultado da Divisao: %d\n", divisao);
			 	}
		 	
				else if (opcao == 3){
				 printf ("Resultado da Soma: %d\n", soma);
					 }
			 
					else if (opcao == 4){
					 printf ("Resultado da Subtracao: %d\n", subtracao);
					 	}
		
	
system("PAUSE");
}
