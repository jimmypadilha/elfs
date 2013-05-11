algoritmo "questao 3.5"
// Função :
// Autor :
// Data : 10/5/2013
// Seção de Declarações 
var
   ano: inteiro
   popA, popB, cresA, cresB: real
inicio
// Seção de Comandos
   ano<-0
   
   escreva("Digite a população do país A: ")
   leia(popA)
   
   escreva("Digite a taxa anual de crescimento do país A: ")
   leia(cresA)

   escreva("Digite a população do país B: ")
   leia(popB)
   
   escreva("Digite a taxa anual de crescimento do país B: ")
   leia(cresB)

   enquanto popA < popB faca
      ano<-ano + 1
      popA<-popA +(popA*cresA)
      popB<-popB +(popB*cresB)
   fimenquanto
   escreva("Após ", ano, " anos a população do país A ultrapassará a população do país B")
fimalgoritmo
