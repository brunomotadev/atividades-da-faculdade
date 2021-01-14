#include <stdio.h>
#include <stdlib.h>

/* Bruno Mota de Oliveira RA: 2218111943 */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero;
	
	printf("Digite 1 ou 2\n\n1 - Sinal Vermelho \n\n2- Sinal Verde.\n\n");
	scanf("%d", &numero);
	fflush(stdin);
	
	if(numero == 1){
		printf("ESPERE");
	} else {
		printf("SIGA");
	}
	
	
	
	return 0;
	system("PAUSE");
}
