algoritmo "questao 3.9"
// Função :
// Autor :
// Data : 9/5/2013
// Seção de Declarações 
var
d,c,i,n,j:inteiro
inicio
i<-0
j<-0
d<-0
escreva("digite um numero INTEIRO ")
leia(n)
escreval("numeros primos entre [1 e ",n,"]")
 escolha(n)
 caso 0
   escreva("nenhum numero primo")
   escreva("divisoes executadas = ",d)
 caso 1
   escreval(n)//convem que 1 e ja e primo
   escreva("divisoes executadas = ",d)
 outrocaso
   escreval(" 1")//convem que 1 e ja e primo
   para i de 1 ate n faca
      c<-0
      para j de 1 ate i\2 faca
         se (i%j=0) entao
           d<-d+1
           c<-c+1
         fimse
      fimpara
      Se c=1 entao
         escreval(i)
      fimse
   fimpara
    escreva("divisoes executadas",d)
 fimescolha

fimalgoritmo
