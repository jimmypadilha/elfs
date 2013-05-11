algoritmo "O maior e menor de 3 numeros"
// Função :
// Autor :
// Data : 7/5/2013
// Seção de Declarações 
var

menor,maior,numero1, numero2, numero3 : inteiro
inicio
// Seção de Comandos 

   escreval("Insira numero 1")
     leia(numero1)
   escreval("Insira numero 2")
     leia(numero2)
   escreval("Insira numero 3")
     leia(numero3)

   maior <- numero1
   menor <- numero1
   
   se((numero2 > maior) ou (numero2 = maior))entao
       maior <- numero2
   fimse

   se((numero3 > maior) ou (numero3 = maior))entao
       maior <- numero3
   fimse

   se((numero2 < menor) ou (numero2 = menor))entao
      menor <- numero2
   fimse
   
   se((numero3 < menor) ou (numero2 = menor))entao
     menor <- numero3
   fimse


   escreval("")
   escreval("menor",menor)
   escreval("maior",maior)


fimalgoritmo
