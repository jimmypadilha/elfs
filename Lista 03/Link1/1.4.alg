algoritmo "1.4 M�dia Bimestral"
// Fun��o :
// Autor :
// Data : 5/8/2013
// Se��o de Declara��es 
var
   v_nota:vetor[1..4] de real
   s,md:real
   i:inteiro
inicio
i<-1
s<-0

 para i de 1 ate 4 faca
   Escreva("digite a",i," nota bimestral =")
   leia(v_nota[i])
   s<-s+v_nota[i]
 fimpara

md <- s/4
escreva("Media do aluno=",md)

fimalgoritmo
