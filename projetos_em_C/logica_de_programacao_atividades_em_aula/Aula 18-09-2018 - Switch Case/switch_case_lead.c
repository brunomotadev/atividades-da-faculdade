#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int i;
	
		printf("\n\n\n \t\t\t \"Cara\" ou \"Coroa\"? \n\n\n");
		printf("\t\t 1. cara\n");
		printf("\t\t 2. coroa\n");
		
		printf("\n\n\n \t\t\t Selecione a op��o: ");
		scanf("%d", &i);
	
			switch(i){//estrutura de sele��o
				case 1 : printf("\n Voc� escolheu cara\n"); break;
				case 2 : printf("\n Voc� escolheu coroa\n"); break;
				default: printf("\n Entre com 1 ou 2 apenas\n");
			}
			
	system("pause");
}
