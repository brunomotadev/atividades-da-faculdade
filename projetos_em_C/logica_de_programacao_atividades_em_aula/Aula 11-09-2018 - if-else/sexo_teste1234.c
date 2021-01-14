#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main (){
	char letra;
	
	printf("Digite a letra do seu sexo: ");
	scanf("%c", &letra);
	
		if (letra == 'M' || letra == 'm'){
			printf("Masculino\n");
		}
			else if (letra == 'F' || letra == 'f'){
			printf("Feminino\n");
			}
		
		else {
			printf("Indefinido\n");
		}
		
		printf("\n\n");
		
	system ("PAUSE");
}
