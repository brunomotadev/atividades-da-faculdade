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
	
		printf("Digite o primeiro n�mero: ");
			scanf("%d", &num1);
			
		printf("Digite o segundo n�mero: ");
			scanf("%d", &num2);
			
	printf("Escolha a opera��o: \n\n\n 1 - Soma \n 2 - Subtracao \n 3 - Divisao \n 4 - Multiplicacao\n\n");
		scanf("%d", &operacao);
		
		switch(operacao){
			case 1: printf("O resultado da soma �: %d\n",(num1 + num2)); break;
			case 2: printf("O resultado da subtracao �: %d\n",(num1 - num2)); break;
			case 3: printf("O resultado da divis�o �: %d\n", (num1 / num2)); break;
			case 4: printf("O resultado da multiplica��o �: %d\n\n", (num1 * num2)); break;
			default: printf("Op��o inv�lida.\n");
		}
		
			printf("Deseja realizar outra opera��o? \n\n1 - Sim \n2 - N�o\n");
				scanf("%d", &resposta);
		}
system("PAUSE");
return 0;
}
