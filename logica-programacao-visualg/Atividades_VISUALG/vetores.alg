algoritmo "semnome"
// Função :
// Autor :
// Data : 30/10/2018
// Seção de Declarações 
var
   v: vetor[1..6] de Inteiro
   c: Inteiro
inicio
// Seção de Comandos 
   Para c <- 1 ate 6 faca
        Escreva("Digite o ", c, ".o valor: ")
        Leia(v[c])
   FimPara
   
   Para c <- 1 ate 6 faca
        Escreva ("{", v[c], "}")
   FimPara
fimalgoritmo
