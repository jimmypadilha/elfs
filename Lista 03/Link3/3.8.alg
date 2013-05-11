algoritmo "questao 3.8"
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
   escreva("numero ",n," nao e primo e nao divisivel por nenhum numero:")
 caso 1
   escreval(n)
   escreva("numero ",n," nao e primo e  mas e divisivel por:",n)
 outrocaso
      para i de 1 ate n\2 faca
         se (n%i=0) entao
           c<-c+1
         fimse
      fimpara
      Se c=1 entao
        escreva("numero",n," e numero primo")
      senao
        escreval("numero ",n," nao e primo mas e divisivel por:")
        para i de 1 ate n faca
           se n%i=0 entao
            escreval(i)
           fimse
        fimpara
      fimse

 fimescolha

fimalgoritmo
