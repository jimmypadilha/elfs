algoritmo "ordenar numeros"
// Fun��o :
// Autor :
// Data : 7/5/2013
// Se��o de Declara��es 
var

numero1, numero2, numero3 : inteiro
maior,menor, meio:inteiro

inicio
// Se��o de Comandos

   escreval("Insira numero 1")
     leia(numero1)
   escreval("Insira numero 2:")
     leia(numero2)
   escreval("Insira numero 3:")
     leia(numero3)
     
   maior <- numero1
   menor <- numero1
   meio <- numero1

   se(numero2 > maior)entao
      maior <- numero2
   fimse
   se(numero2 < menor)entao
      menor <- numero2
   fimse
   
   se(numero3 > maior)entao
      maior <- numero3
   fimse
   se(numero3 < menor) entao
      menor <- numero3
   fimse
   
   se((numero1 <> maior)e (numero1 <> menor) ) entao
       medio <- numero1
   senao
    se((numero2 <> maior)e (numero2 <> menor)) entao
       meio <- numero2
    senao
       meio <- numero3
    fimse
   fimse
   
   escreval("Menor:", menor,"  Meio",meio,"  Maior", maior)
fimalgoritmo
