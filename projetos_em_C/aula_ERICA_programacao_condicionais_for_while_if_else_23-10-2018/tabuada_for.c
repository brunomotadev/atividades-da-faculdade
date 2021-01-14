#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int tabuada, x, opcao;
	
	opcao=0;
	
	while(opcao!=2)
	{
		system("clear || cls");
		
		printf("Digite número que deseja a tabuada: ");
			scanf("%d", &tabuada);
			
		for(x=0; x<=10; x++)
			printf("%d * %d = %d \n",tabuada, x,(tabuada * x));
	
		printf("Deseja continuar? \n\n 1 - Sim \n 2 - Não\n\n");
			scanf("%d", &opcao);
	}
		
		system("PAUSE");
}
