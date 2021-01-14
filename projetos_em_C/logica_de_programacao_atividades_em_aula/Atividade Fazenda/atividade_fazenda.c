#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	int total, cavalos, flamingos, patas, cabecas;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o numero de patas: ");
	scanf("%d", &patas);
	
	printf("Digite o numero de cabeças: ");
	scanf("%d", &cabecas);
	
	total = patas - (2*cabecas); // total é  quantidade de cabeças multiplicada por 2, subtraído pela quantidade de patas.
	cavalos = total / 2; // cavalos é o total divido por 2.
	
	flamingos = cabecas - cavalos; // flamingos é o que sobra. Cabeças subtraídas por cavalos.
	
	
	printf("Total de cavalos é: %d\n", cavalos);
	printf("Total de Flamingos é: %d\n", flamingos);

	
system("PAUSE");
	
	
}
