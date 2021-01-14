#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Bruno Mota de Oliveira RA: 2218111943*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	
	int numero1;
	
	printf("Digite um numero: ");
	scanf("%d", &numero1);
	fflush(stdin);
	
	if((numero1%2)==1) {
		printf("O número digitado é Impar");
	} else{
		printf("O número digitado é Par");
	}
	
	return 0;
	system("PAUSE");
}
