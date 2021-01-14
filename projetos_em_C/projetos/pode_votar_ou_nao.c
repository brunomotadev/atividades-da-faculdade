#include <stdio.h>
#include <stdlib.h>

main () {
int idade;

	printf("Escreva sua idade\t");
	scanf("%d",&idade);
	if ( idade > 16) printf("Pode votar\n");
	else printf("Nao pode votar\a\n");
	
	system("PAUSE");	
	return 0;
}

