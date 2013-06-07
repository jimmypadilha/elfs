algoritmo "fatorial de um numero "
// Função :
// Autor :
// Data : 7/5/2013
// Seção de Declarações 
var
cont,i,numero,fatorial :inteiro


inicio
// Seção de Comandos 
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
    escreval("O fatorial de",numero,"e", fatorial)


fimalgoritmo
