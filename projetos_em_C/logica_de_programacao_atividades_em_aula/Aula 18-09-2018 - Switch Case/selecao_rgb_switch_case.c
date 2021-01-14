#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "portuguese");
	char opcao;
	
		
		
		printf("Digite uma letra (R, G ou B) para ver a qual cor em inglês ela pertence: ");
		fflush(stdin);
		opcao = getchar();
		
			printf("\n");
		
			switch(opcao){
				
				case 'r': case 'R': printf("Red (vermelho)\n\n"); break;
				
				case 'g': case 'G': printf("Green (verde)\n\n"); break;
				
				case 'b': case 'B': printf("Blue (azul)\n\n"); break;
				
				default: printf("Cor inválida!\n");
			}
	
	system("PAUSE");
	
}
