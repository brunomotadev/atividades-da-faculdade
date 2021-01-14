#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Bruno Mota de Oliveira RA: 2218111943 */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	
	float numero1, numero2;
	
	printf("Digite o primeiro número: ");
	scanf("%f", &numero1);
	fflush(stdin);
	
	printf("Digite o segundo número: ");
	scanf("%f", numero2);
	fflush(stdin);
	
	
	
	
	
	return 0;
	system("PAUSE");
}
