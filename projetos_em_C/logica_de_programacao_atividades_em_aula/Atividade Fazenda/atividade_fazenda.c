#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	int total, cavalos, flamingos, patas, cabecas;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o numero de patas: ");
	scanf("%d", &patas);
	
	printf("Digite o numero de cabe�as: ");
	scanf("%d", &cabecas);
	
	total = patas - (2*cabecas); // total �  quantidade de cabe�as multiplicada por 2, subtra�do pela quantidade de patas.
	cavalos = total / 2; // cavalos � o total divido por 2.
	
	flamingos = cabecas - cavalos; // flamingos � o que sobra. Cabe�as subtra�das por cavalos.
	
	
	printf("Total de cavalos �: %d\n", cavalos);
	printf("Total de Flamingos �: %d\n", flamingos);

	
system("PAUSE");
	
	
}
