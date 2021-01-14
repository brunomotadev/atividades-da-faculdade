#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	char letra;
	
		printf("Digite S, C ou P. Para saber qual é o time correspondente a letra: ");
		fflush(stdin);
		letra = getchar();
		
			switch(letra){
				
				case 's': case 'S': printf("São Paulo\n"); break;
				
				case 'c': case 'C': printf("Corinthians\n"); break;
				
				case 'p': case 'P': printf("Palmeiras\n"); break;
				
				default: printf("Time desconhecido!\n\n");
			}
	system("PAUSE");
return 0;
}
