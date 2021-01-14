#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y,z,w;

        printf("Digite um numero: \n");
            scanf("%d", &x);
        printf("Digite o valor a somar: \n");
            scanf("%d", &y);

        z = x + y;
        w = pow(x,3);

        printf("\nA soma de %d com %d equivale a %d\n", x, y, z);
        printf("\n%d elevado ao cubo: %d\n", x, w);

    return 0;
}
