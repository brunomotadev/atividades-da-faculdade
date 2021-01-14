#include <stdio.h>
#include <stdlib.h>

main()
{
	float soma;
	int a, qntde;
	
	printf("Quantas notas voce deseja calcular? ");
	scanf("%d", &qntde);
	
	float notas[qntde];
		
	for(a=0; a<qntde; a++){
	printf("Insira a [%d]nota: ",(a+1));
    scanf("%f", &notas[a]);

    soma = soma + notas[a];
}

    printf("media: %.2f\n", (soma/qntde));
    
system("PAUSE");
}
