#include <stdio.h>
#include <stdlib.h>

main ()
{
	int v[6];
	int c;
	
	for(c=1; c<7;c++){
		printf("Digite o %d.o valor: ",c);
		scanf("%d", &v[c]);
	}
	
	for(c=1; c<6;c++){
		printf("{ %d }", v[c]);
	}
	
system("PAUSE");
}
