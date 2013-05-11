algoritmo "questao 3.4"
// Função :
// Autor :
// Data : 10/5/2013
// Seção de Declarações 
var
   ano: inteiro
   popA, popB, cresA, cresB: real
inicio
// Seção de Comandos
   popA<-80000
   popB<-200000
   ano<-0
   cresA<-0.03
   cresB<-0.015

   enquanto popA < popB faca
        ano<-ano + 1
        popA<-popA +(popA*cresA)
        popB<-popB +(popB*cresB)
   fimenquanto
   escreva("Após ", ano, " anos a população do país A ultrapassará a população do país B")
fimalgoritmo
