#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL,"portuguese");
	
	int op;
	char opcao;
	
	do{
		system("clear || cls");
		printf("\n\n\tOperações disponíveis nesse caixa: \n\n");
		printf("\t\t 1 - Sacar\n");
		printf("\t\t 2 - Depositar\n");
		printf("\t\t 3 - Transferir\n\n");
	
		printf("\tDigite o número de acordo com operação desejada: ");
		scanf("%d", &op);
		//fflush(stdin);
		printf("\n");
		
		switch(op){
			case 1 : printf("\t\t Saque em andamento.\n\n"); break;
			case 2 : printf("\t\t Depósito em andamento\n\n"); break;
			case 3 : printf("\t\t Transferência em andamento\n\n"); break;
			default: printf("\t\t Opção selecionada é inválida, tente novamente.\n");
		}
		
		printf("Repetir? (S/s)im (N/n)ao\n");
		scanf (" %c", &opcao);
		
	} while (opcao=='S' || opcao=='s');
	  puts("\n\n ATÉ LOGO!");
		
		
	getch();
}

		

