#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Bruno Mota de Oliveira RA: 2218111943 */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	
	int numero1, numero2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	fflush(stdin);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	fflush(stdin);
	
	if(numero1 > numero2) {
		printf("O maior numero é: %d\n\n", numero1);
	} else {
		printf("O maior numero é: %d\n\n", numero2);
	}
	
	return 0;
	system("PAUSE");
}
