#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main ()
{
    char cpf[11], rg[80], cnpj[80], cliente[80];
    char endereco[80], numero_endereco[20], complemento [20], cep[8], bairro[40], cidade[40], estado[40], telefone1[30], telefone2[30], email[60];
    char tipo_pessoa, opcao_telefone, novocadastro;

    setlocale(LC_ALL, "Portuguese");


        do{
            system("clear || cls"); // LIMPA OS DADOS PREENCHIDOS


                    do{                                                                           // ESTRUTURA DO-WHILE REPETE ESSE BLOCO DE C�DIGO AT� QUE A OP��O ESCOLHIDA SEJA 1 OU 2.
                            printf(" Pessoa F�sica ou Jur�dica?\n\n");
                            printf("\t1 - F�sica\n");
                            printf("\t2 - Jur�dica\n\n");
                                tipo_pessoa = getch();
                                fflush(stdin);

									switch(tipo_pessoa){
                                        case '1': printf(" Digite o CPF: ");
                                                    scanf("%s", cpf);
                                                    fflush(stdin);

                                                printf(" Digite o RG: ");
                                                    scanf("%s", rg); break;
                                                    fflush(stdin);

                                        case '2': printf(" Digite o CNPJ: ");
                                                    scanf("%s", cnpj); break;
                                                    fflush(stdin);


                                        default: printf(" Op��o inv�lida. Tente novamente utilizando 1 para pessoa f�sica ou 2 para pessoa jur�dica.\n\n");

									}if ( tipo_pessoa == '1' || tipo_pessoa == '2'){              // SE O TIPO PESSOA FOR PREENCHIDO COM 1 OU 2. VAI PARA A PROXIMA PARTE DO C�DIGO. SEN�O VOLTA AO LOOP DO WHILE.
                                    	break;
									}

                                } while( tipo_pessoa != '1' || tipo_pessoa != '2');              // DO-WHILE FIM DO BLOCO DE C�DIGO.






                printf(" Digite o nome do cliente: ");
                    fflush(stdin);
                    gets(cliente);


                printf(" Digite o Endere�o: ");
                    gets(endereco);
                    fflush(stdin);

                printf(" Digite o N�mero: ");
                    gets(numero_endereco);
                    fflush(stdin);

                printf(" Digite o complemento: ");
                    gets(complemento);
                    fflush(stdin);

                printf(" Digite o nome do bairro: ");
                    gets(bairro);
                    fflush(stdin);

                printf(" Digite o nome da cidade: ");
                    gets(cidade);
                    fflush(stdin);

                printf(" Digite o nome do estado: ");
                    gets(estado);
                    fflush(stdin);

                printf(" Digite o principal n�mero de telefone com DD: ");
                    gets(telefone1);
                    fflush(stdin);

                            printf("\n\n");

                            do{

                            printf(" Cliente possui outro n�mero para contato?\n\n");

                            printf("\t1 - Sim\n");
                            printf("\t2 - N�o\n\n");

                            opcao_telefone = getch();

                                switch(opcao_telefone){
                                    case '1': printf(" Digite o n�mero para contato: ");
                                        gets(telefone2); break;
                                        fflush(stdin);

                                    case '2': break;

                                    default: printf(" Op��o inv�lida. Tente novamente utilizando \"1\" para Sim e \"2\" para n�o.");

                                } if(opcao_telefone == '1' || opcao_telefone == '2'){
                                	break;
								}
                            } while (opcao_telefone != '1' || opcao_telefone != '2');

                printf(" Digite o endere�o de email: ");
                    gets(email);
                    fflush(stdin);

                printf("\n\n"); // espa�amento.

// O c�digo abaixo ir� fazer a impress�o dos dados na tela.

                printf("\tDados do Cliente: \n\n");

                                switch(tipo_pessoa){
                                    case '1': printf(" CPF: %s\n", cpf);
                                            printf(" RG: %s\n", rg); break;

                                    case '2': printf(" CNPJ: %s\n", cnpj); break;
                                }

                printf(" Cliente: %s \n", cliente);
                printf(" Endere�o: %s \n", endereco);
                printf(" N�mero: %s \n", numero_endereco);
                printf(" Complemento: %s\n", complemento);
                printf(" Bairro: %s \n", bairro);
                printf(" Cidade: %s \n", cidade);
                printf(" Estado: %s \n", estado);
                printf(" Telefone Principal: %s \n", telefone1);

                                switch(opcao_telefone){
                                    case '1': printf(" Segundo telefone: %s \n", telefone2); break;
                                    case '2': break;
                                }

                printf(" Email: %s\n", email);

                printf("\n\n"); // ESPA�AMENTO

                printf(" Deseja cadastrar outro cliente?\n\n");
                    printf("\t1 - Sim\n");
                    printf("\t2 - N�o\n");
                        novocadastro = getch();
                        fflush(stdin);


        } while (novocadastro == '1');
            puts("\n\n At� logo!");

getch();
}

