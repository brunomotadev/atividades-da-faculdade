algoritmo "notaluno"
// Fun��o :
// Autor :
// Data : 29/10/2018
// Se��o de Declara��es 
var
    n1,n2,media: real
inicio
// Se��o de Comandos 
     EscrevaL("Primeira Nota: ")
     Leia(n1)
     EscrevaL("Segunda Nota: ")
     Leia(n2)
     
     media <- (n1+n2)/2
     
     Se (media >= 9) e (media <= 10) entao
        EscrevaL ("Nota A")
     senao
          Se (media >= 8) e (media < 9) entao
             EscrevaL ("Nota B")
          senao
               Se (media >= 7) e (media < 8) entao
                  EscrevaL("Nota C")
               senao
                    Se (media >= 6) e (media < 7) entao
                       EscrevaL("Nota D")
                    senao
                         Se ( media >= 5) e (media < 6) entao
                            EscrevaL("Nota E")
                         senao
                              EscrevaL("Nota F")
                         FimSe
                    FimSe
               FimSe
          FimSe
     FimSe

fimalgoritmo
