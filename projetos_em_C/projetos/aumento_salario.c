#include <stdio.h>
#include <stdlib.h>

main () {
	float salario,aumento;
		
		printf ("Digite o valor do seu salario: \t");
		scanf ("%f", &salario);
		
		aumento = (salario*30/100)+salario; //CALCULO AUMENTO SALARIO
		
		printf ("Salario atualizado: %.2f\n",aumento); //RESULTADO AUMENTO SALARIO
		
		system ("PAUSE");
		return 0;
}
