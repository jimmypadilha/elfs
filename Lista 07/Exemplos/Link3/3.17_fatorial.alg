algoritmo "fatorial de um numero "
// Fun��o : Calcula o fatorial de um numero
// Autor :  grupo 4
// Data : 7/5/2013
// Se��o de Declara��es 
var
// Declara��o de vari�veis

cont,i,numero,fatorial :inteiro


inicio
// Se��o de Comandos 

   escreval("Insira o numero para determinar o fatorial")
    leia(numero)

    fatorial <- 1
    
    se(numero = 0) entao
       fatorial <- 1
    senao
      para i de 1 ate numero faca
         fatorial<- fatorial *i
      fimpara
    fimse
    escreval("O fatorial de",numero," e", fatorial)


fimalgoritmo
