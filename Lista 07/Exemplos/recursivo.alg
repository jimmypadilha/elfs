algoritmo "semnome"
// Função :
// Autor :
// Data : 25/7/2013
// Seção de Declarações 
var
 fatorial,aux :inteiro

funcao fat(n:inteiro):inteiro
var
a:inteiro

   inicio

   se (n=0) entao
      a <- 1
   senao
      // a <- a +n*fat(n-1)
   fimse

   retorne a
fimfuncao

inicio
// Seção de Comandos

	leia(aux)
 fatorial <- fat (aux)
 
 escreval(fatorial)

fimalgoritmo


