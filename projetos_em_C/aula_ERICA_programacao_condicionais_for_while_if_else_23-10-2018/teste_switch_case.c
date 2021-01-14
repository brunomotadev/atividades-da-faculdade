#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, operacao, resposta;
	
	resposta = 1;
	
	while(resposta!=2)
	{
	
		printf("Digite o primeiro número: ");
			scanf("%d", &num1);
			
		printf("Digite o segundo número: ");
			scanf("%d", &num2);
			
	printf("Escolha a operação: \n\n\n 1 - Soma \n 2 - Subtracao \n 3 - Divisao \n 4 - Multiplicacao\n\n");
		scanf("%d", &operacao);
		
		switch(operacao){
			case 1: printf("O resultado da soma é: %d\n",(num1 + num2)); break;
			case 2: printf("O resultado da subtracao é: %d\n",(num1 - num2)); break;
			case 3: printf("O resultado da divisão é: %d\n", (num1 / num2)); break;
			case 4: printf("O resultado da multiplicação é: %d\n\n", (num1 * num2)); break;
			default: printf("Opção inválida.\n");
		}
		
			printf("Deseja realizar outra operação? \n\n1 - Sim \n2 - Não\n");
				scanf("%d", &resposta);
		}
system("PAUSE");
return 0;
}
