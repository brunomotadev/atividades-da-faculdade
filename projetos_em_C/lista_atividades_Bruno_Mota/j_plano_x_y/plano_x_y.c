#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	
	int vitorias, derrotas;
	
	printf("Digite o número de Vitórias: ");
	scanf("%d", &vitorias);
	fflush(stdin);
	
	printf("Digite o número de Derrotas: ");
	scanf("%d", &derrotas);
	fflush(stdin);
	
	if( vitorias > derrotas) {
		printf("BOM");
	} else {
		printf("RUIM");
	}
	
	return 0;
	system("PAUSE");
}
