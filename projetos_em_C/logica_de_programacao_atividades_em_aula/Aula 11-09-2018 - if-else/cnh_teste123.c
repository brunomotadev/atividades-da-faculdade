#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
	char categoria;
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite a letra da sua categoria da CNH: ");
	scanf ("%c", &categoria);
	
	
		if (categoria == 'A' || categoria =='a'){
			printf("Voc� pode dirigir moto.\n");
		}
		
		else if (categoria == 'B' || categoria == 'b'){
			printf("Voc� pode dirigir carro.\n");
		}
		
		else if (categoria == 'C' || categoria == 'c'){
			printf("Voc� pode dirigir caminhonetes e vans.\n");
		}
		
		else if (categoria == 'D' || categoria == 'd'){
			printf("Voc� pode dirigir �nibus e caminh�es.\n");
		}
		
		else if (categoria == 'E' || categoria == 'e'){
			printf("Voc� pode dirigir �nibus e caminh�es articulados\n");
		}
		
	system ("PAUSE");
	
return 0;
}
