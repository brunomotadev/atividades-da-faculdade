#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Bruno Mota de Oliveira RA: 2218111943 */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	float numero1;
	
	printf("Digite um número: ");
	scanf("%f", &numero1);
	fflush(stdin);
	
	if ( numero1 > 100) {
		printf("Maior do que 100");
	}else{
		printf("Menor do que 100");
	}
	
	return 0;
	system("PAUSE");
}
