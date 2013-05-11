algoritmo "questao 3.7"
// Função :
// Autor :
// Data : 9/5/2013
// Seção de Declarações
var
c,i,n:inteiro
inicio

escreva("digite um numero INTEIRO ")
leia(n)

 escolha(n)

 caso 0
   escreva("numero ",n," nao e primo ")

 caso 1
   escreva("numero ",n," e primo ")

 outrocaso

      para i de 1 ate n\2 faca
         se (n%i=0) entao
           c<-c+1
         fimse
      fimpara

      Se c=1 entao
        escreva("numero",n," e numero primo")
      senao
        escreval("numero ",n," nao e primo")
      fimse

 fimescolha

fimalgoritmo

