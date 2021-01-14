algoritmo "dependentesfuncionario"
// Função :
// Autor :
// Data : 29/10/2018
// Seção de Declarações 
var
   nome: caractere
   salario, novo_salario: real
   dependentes: inteiro

inicio
// Seção de Comandos 
    Escreva("Qual o nome do Funcionario? ")
    Leia (nome)
    Escreva("Qual o salario do Funcionario? ")
    Leia(salario)
    Escreva("Qual e a quantidade de dependentes? ")
    Leia(dependentes)
    
    Escolha dependentes
            Caso 0
                 novo_salario <- salario + ((salario*5)/100)
            Caso 1, 2, 3
                 novo_salario <- salario + ((salario*10)/100)
            Caso 4, 5, 6
                 novo_salario <- salario + ((salario*15)/100)
            OutroCaso
                 novo_salario <- salario + ((salario*18)/100)
    FimEscolha
    
    EscrevaL("O novo salario de ", nome," sera de R$", novo_salario:5:2)

fimalgoritmo
