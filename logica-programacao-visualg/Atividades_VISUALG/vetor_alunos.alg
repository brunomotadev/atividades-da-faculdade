algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 30/10/2018
// Se��o de Declara��es 
var
   nome: vetor[1..4] de Caractere
   n1: vetor[1..4] de Real
   n2: vetor[1..4] de Real
   m: vetor[1..4] de Real
   SM, MT: real
   i,tot: inteiro
inicio
// Se��o de Comandos 

   Para i <- 1 ate 4 faca
        EscrevaL("ALUNO ", i)
        EscrevaL("Nome: ")
        Leia(nome[i])
        EscrevaL("Primeira Nota: ")
        Leia(n1[i])
        EscrevaL("Segunda Nota: ")
        Leia(n2[i])
        m[i] <- (n1[i]+n2[i])/2
        SM <- SM + m[i]
   FimPara
   MT <- SM/4
   
   LimpaTela
   EscrevaL("LISTAGEM DE ALUNOS")
   EscrevaL("-------------------------")
   Para i <- 1 ate 4 faca
        EscrevaL(nome[i]:15, m[i]:4:1)
        Se (m[i] > MT) entao
        Tot <- Tot+1
        FimSe
   FimPara
   
   EscrevaL("Ao todo temos ", tot, " alunos acima da media da turma que e ", MT:4:1)
fimalgoritmo
