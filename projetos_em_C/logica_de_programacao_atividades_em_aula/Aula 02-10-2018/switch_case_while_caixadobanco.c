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
		printf("\n\n\tOpera��es dispon�veis nesse caixa: \n\n");
		printf("\t\t 1 - Sacar\n");
		printf("\t\t 2 - Depositar\n");
		printf("\t\t 3 - Transferir\n\n");
	
		printf("\tDigite o n�mero de acordo com opera��o desejada: ");
		scanf("%d", &op);
		//fflush(stdin);
		printf("\n");
		
		switch(op){
			case 1 : printf("\t\t Saque em andamento.\n\n"); break;
			case 2 : printf("\t\t Dep�sito em andamento\n\n"); break;
			case 3 : printf("\t\t Transfer�ncia em andamento\n\n"); break;
			default: printf("\t\t Op��o selecionada � inv�lida, tente novamente.\n");
		}
		
		printf("Repetir? (S/s)im (N/n)ao\n");
		scanf (" %c", &opcao);
		
	} while (opcao=='S' || opcao=='s');
	  puts("\n\n AT� LOGO!");
		
		
	getch();
}

		

