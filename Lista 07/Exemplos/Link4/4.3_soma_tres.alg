algoritmo "fun��o_soma_tr�s"
// Fun��o : Recebe tr�s argumentos e os soma
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis
Valor_1, Valor_2, Valor_3, fsoma: real

FUNCAO Soma (Recebe_valor1, Recebe_valor2, Recebe_valor3 :Real):Real
var
total: real

inicio

total <- Recebe_valor1 + Recebe_valor2 + Recebe_valor3
retorne total

fimfuncao

inicio

// Se��o de Comandos
escreva("Entre com o numero: ") // Imprime na tela o texto
leia (Valor_1)   // l� o valor digitado
escreva("Entre com o numero: ") // Imprime na tela o texto
leia (Valor_2)   // l� o valor digitado
escreva("Entre com o numero: ") // Imprime na tela o texto
leia (Valor_3)   // l� o valor digitado

fsoma <- Soma (Valor_1,Valor_2,Valor_3)

escreva ("A soma �: ", fsoma)  // Imprime na tela o texto

fimalgoritmo
