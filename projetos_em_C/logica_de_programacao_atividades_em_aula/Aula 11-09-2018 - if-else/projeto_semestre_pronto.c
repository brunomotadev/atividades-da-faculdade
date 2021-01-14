#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* FACA UM PROGRAMA EM C NO QUAL O USUARIO DIGITE UM NUMERO E O PROGRAMA INFORME SE O NUMERO E PAR OU IMPAR */

main () {
	int numero;
	setlocale (LC_ALL,"portuguese");
	
		printf("Digite um número e pressione a tecla Enter: ");
		scanf("%d", &numero);
		
			if (numero%2 == 0 ){
				printf("%d é par", numero);
	}
			else {
				printf("%d é impar", numero);
			}
			
		system ("PAUSE");
	return 0;
}
