algoritmo "mesmo_num_lin"
// Fun��o : Recebe numero e escreve de 1 a n, cada n em uma linha
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es
var
// Declara��o de vari�veis
num:inteiro

funcao func(num:inteiro): caractere

var
i,j:inteiro

inicio

para i de 1 ate num faca
     escreval(" ")
   para j de 1 ate i faca
    escreva(i)
   fimpara
fimpara
retorne  " "
fimfuncao

inicio
// Se��o de Comandos
escreval("Insira um numero: ")
leia(num)

escreva(func(num))

fimalgoritmo
