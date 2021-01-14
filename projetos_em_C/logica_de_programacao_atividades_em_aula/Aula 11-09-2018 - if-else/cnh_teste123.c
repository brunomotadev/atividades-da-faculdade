#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
	char categoria;
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite a letra da sua categoria da CNH: ");
	scanf ("%c", &categoria);
	
	
		if (categoria == 'A' || categoria =='a'){
			printf("Você pode dirigir moto.\n");
		}
		
		else if (categoria == 'B' || categoria == 'b'){
			printf("Você pode dirigir carro.\n");
		}
		
		else if (categoria == 'C' || categoria == 'c'){
			printf("Você pode dirigir caminhonetes e vans.\n");
		}
		
		else if (categoria == 'D' || categoria == 'd'){
			printf("Você pode dirigir ônibus e caminhões.\n");
		}
		
		else if (categoria == 'E' || categoria == 'e'){
			printf("Você pode dirigir ônibus e caminhões articulados\n");
		}
		
	system ("PAUSE");
	
return 0;
}
