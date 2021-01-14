#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Bruno Mota de Oliveira RA: 2218111943 */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	
	float receita, despesa;
	
	printf("Digite o valor da receita da empresa: ");
	scanf("%f", &receita);
	fflush(stdin);
	
	printf("Digite o valor da despesa da empresa: ");
	scanf("%f", &despesa);
	fflush(stdin);
	
	if( receita > despesa) {
		printf("Sua empresa esta com LUCRO");
	} else {
		printf("Sua empresa esta com PREJUIZO");
	}
	
	
	
	return 0;
	system("PAUSE");
}
