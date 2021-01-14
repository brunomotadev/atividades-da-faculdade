#include <stdio.h>
#include <stdlib.h>
#include <string.h>


main () {
	char nome[30], sobrenome[80];
	
		printf("Digite seu nome:  ");
		gets (nome);
		
		
		printf("Digite seu sobrenome: ");
		gets(sobrenome);
		
		
		printf("\n\n");
		
		printf("Confirme se seus dados estao corretos: \n\n");
		
		printf("Nome: %s\n", nome);
		printf("Sobrenome: %s\n", sobrenome);
		
	system ("PAUSE");
	return 0;
}
