#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main () {
	setlocale (LC_ALL, "portuguese");
	
	char  cliente[80] , cnpj[14] , cpf[11] , rg[50], endereco[80], num_endereco[20], bairro[60], cidade[50], estado[50], telefone1[20], telefone2[20], email[80]; 
	char tipo_pessoa[3], resposta[3];
	
			printf ( "Para pessoa fisica, digite 1. Para pessoa juridica, digite 2: " );
				scanf ("%c", &tipo_pessoa);
				fflush(stdin);
			
			printf ("\n");		
   					
				
						if ( tipo_pessoa == '1' ) {
							printf ( "Digite CPF: ");
								gets (cpf);
									
    								
					}	
						
						else {
						
							printf ( "Digite CNPJ: " );
								gets (cnpj);
								
					}

						
			printf ( "Digite o nome do cliente: " );
				gets (cliente);
				
				
			printf ( "Digite o nome da Rua/Av/Trav: " );
				gets (endereco);
				
				
			printf ("Digite o numero e ou complemento: ");
				gets (num_endereco);
				
				
			printf ("Digite o nome do bairro: ");
				gets (bairro);
				
				
			printf ("Digite o nome da cidade: ");
				gets (cidade);
				
				
			printf ("Digite o nome do estado: ");
				gets (estado);
				
				
			printf ("Digite o numero de telefone com DD: ");
				gets (telefone1);
				
				
			printf ("Cliente possui outro numero de telefone para contato? Digite \"s\" ou \"n\":");
				gets (resposta);
				fflush(stdin);
				
				
						
						if ( resposta == 'S' || resposta == 's') {
							printf ("Digite segundo numero de telefone com DD: \n");
								gets (telefone2);
										
						}
						
						else {
							printf ("Cliente nao possui segundo numero de telefone.\n");
							
						}
						
			
			printf ("Digite endereco de email: ");
				gets (email);
				
			printf("\n\n");
				
				

// O CODIGO ABAIXO IRA EXIBIR OS DADOS PREENCHIDOS

			printf ("Confirme se os dados abaixo estao corretos: \n\n");

						if ( tipo_pessoa == '1' ){
						
							printf("CPF: %s \n", cpf);
					}
						else {
						
							printf("CNPJ: %s \n", cnpj);
					}
							
			printf ("Nome do cliente: %s \n", cliente);
			
			printf ("Endereco: %s \n", endereco);
			
			printf ("Numero(Compl): %s \n", num_endereco);
			
			printf ("Bairro: %s \n", bairro);
			
			printf ("Cidade: %s \n", cidade);
			
			printf ("Estado: %s \n", estado);
			
			printf ("Telefone Principal:  %s \n", telefone1);
						
						if (resposta == 's' || 'S' ) printf ("Segundo Telefone: %s \n", telefone2);		
						
			printf ("Email: %s \n", email);	
			
			printf ("\n\n");
							
			system("PAUSE");
			return 0;								
}
