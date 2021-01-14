#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media;

        printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
            scanf("%f", &nota2);

        media = (nota1 + nota2)/2;

                if(media >= 7.0) {
                    printf("Aluno Aprovado. A media dele foi: %.1f", media);
                }
                else{
                    printf("Aluno reprovado. A media dele foi: %.1f", media);
                }
    return 0;
}
