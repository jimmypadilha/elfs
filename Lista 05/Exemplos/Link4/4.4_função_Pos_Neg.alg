algoritmo "função_Pos_Neg"
// Função : Recebe um argumento e retorna "P" caso positivo e "N" caso negativo
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
//Valor_1, Valor_2, Valor_3, total, fsoma: real
Valor_1, func:inteiro
variavel:caracter

//FUNCAO Soma (Recebe_valor1, Recebe_valor2, Recebe_valor3 :Real):Real
FUNCAO Valor (Recebe_valor1:inteiro):inteiro

inicio

se (valor_1>0) entao
variavel <- "P"
senao
variavel <- "N"
// total <- Recebe_valor1 + Recebe_valor2 + Recebe_valor3
retorne variavel
fimse

fimfuncao

inicio

// Seção de Comandos
escreva("Entre com o valor: ") // Imprime na tela o texto
leia (Valor_1)   // lê o valor digitado

//fsoma <- Soma (Valor_1,Valor_2,Valor_3)
func <- Valor (Valor_1)

escreval("O valor é: ", func)  // Imprime na tela o texto

fimalgoritmo
