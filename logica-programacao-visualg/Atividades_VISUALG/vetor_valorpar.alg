algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 30/10/2018
// Se��o de Declara��es 
var
     TotPar, i: Inteiro
     val: vetor[1..7] de Inteiro
inicio
// Se��o de Comandos 
      TotPar <- 0
      Para i <- 1 ate 7 faca
           Escreva("Digite o ", i, "o. valor: ")
           Leia(val[i])
      FimPara
      
      Para i <- 1 ate 7 faca
           Se (val[i] % 2 = 0) entao
              TotPar <- TotPar + 1
              EscrevaL("Valor PAR na posicao ", i)
           FimSe
      FimPara
      EscrevaL("O total de pares foi ", TotPar)


fimalgoritmo
