algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 30/10/2018
// Se��o de Declara��es 
var
   v: vetor[1..6] de Inteiro
   c: Inteiro
inicio
// Se��o de Comandos 
   Para c <- 1 ate 6 faca
        Escreva("Digite o ", c, ".o valor: ")
        Leia(v[c])
   FimPara
   
   Para c <- 1 ate 6 faca
        Escreva ("{", v[c], "}")
   FimPara
fimalgoritmo
