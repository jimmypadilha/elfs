algoritmo "função_soma_três"
// Função : Recebe três argumentos e os soma
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
Valor_1, Valor_2, Valor_3, total, fsoma: real

FUNCAO Soma (Recebe_valor1, Recebe_valor2, Recebe_valor3 :Real):Real

inicio

total <- Recebe_valor1 + Recebe_valor2 + Recebe_valor3
retorne total

fimfuncao

inicio

// Seção de Comandos
escreva("Entre com o numero: ") // Imprime na tela o texto
leia (Valor_1)   // lê o valor digitado
escreva("Entre com o numero: ") // Imprime na tela o texto
leia (Valor_2)   // lê o valor digitado
escreva("Entre com o numero: ") // Imprime na tela o texto
leia (Valor_3)   // lê o valor digitado

fsoma <- Soma (Valor_1,Valor_2,Valor_3)

escreva ("A soma é: ", fsoma)  // Imprime na tela o texto

fimalgoritmo
