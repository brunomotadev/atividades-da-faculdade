#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Bruno Mota de Oliveira RA: 2218111943 */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	
	float nota1, nota2, nota3, nota4, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	fflush(stdin);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	fflush(stdin);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	fflush(stdin);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &nota4);
	fflush(stdin);
	
	media = ((nota1+nota2+nota3+nota4)/4);
	
	printf("Média: %.2f\n\n", media);
	
	if( (media >= 0) && (media < 4)) {
		printf("Conceito D");
	}
	
	else if ((media >= 4) && (media < 7)) {
		printf("Conceito C");
	}
	
	else if ((media >= 7) && ( media < 9)) {
		printf("Conceito B");
	}
	
	else if ((media >= 9) && (media <=10 )) {
		printf("Conceito A");
	}
	
	
	return 0;
	system("PAUSE");
}
