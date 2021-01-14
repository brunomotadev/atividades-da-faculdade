#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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
	
	if( media >= 7) {
		printf("Aluno APROVADO");
	} else {
		printf("Aluno REPROVADO");
	}
	
	return 0;
	system("PAUSE");
}
