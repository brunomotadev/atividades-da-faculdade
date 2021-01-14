#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL,"portuguese");
	
	int opcao;
	
		printf("\n\n\tOperações disponíveis nesse caixa: \n\n");
		printf("\t\t 1 - Sacar\n");
		printf("\t\t 2 - Depositar\n");
		printf("\t\t 3 - Transferir\n\n");
	
		printf("\tDigite o número de acordo com operação desejada: ");
		scanf("%d", &opcao);
		fflush(stdin);
		printf("\n");
		
		switch(opcao){
			case 1 : printf("\t\t Saque em andamento.\n\n"); break;
			case 2 : printf("\t\t Depósito em andamento\n\n"); break;
			case 3 : printf("\t\t Transferência em andamento\n\n"); break;
			default: printf("\t\t Opção selecionada é inválida, tente novamente.\n");
		}
	system("PAUSE");
return 0;
		
}
