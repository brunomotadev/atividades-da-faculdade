#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	printf("\n\n Os numeros naturais de 0 a 100 \n\n");
	i = 0;
	
	while(i<=100) {
		if ( i % 2 == 0){
			printf(" %d ", i);
		}
		//printf(" %d ", i);
		i++; // é o mesmo que i = i+i;
	}
	
printf("\n\n Fim\n\n");
system("pause");
}
