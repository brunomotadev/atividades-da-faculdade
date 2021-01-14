#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
	float peso, altura, imc;
	setlocale(LC_ALL, "portuguese");
	
		printf("Informe seu peso: ");
		scanf("%f", &peso);
		
		printf("Informe sua altura: ");
		scanf("%f", &altura);
		
		imc = peso / (altura*altura);
		
			if (imc <= 18.5) {
				printf("Abaixo do Peso Ideal\n");
			}
			
			else if (imc<=24.9){
				printf("Peso Normal\n");
			}
			
			else if (imc<=29.9){
				printf("Sobrepeso\n");
			}
			
			else if (imc<=34.9){
				printf("Obesidade Grau l\n");
			}
			
			else if (imc<=39.9){
				printf("Obesidade Grau ll\n");
			}
			
			else if (imc>39.9){
				printf("Obesidade Grau lll\n");
			}
			
			printf ("\n\n");
		
	system ("PAUSE");
		
		
	
}
