algoritmo "Farenheit_Celsius"
// Fun��o : converte de  Farenheit p/ Celsius
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis
tf, tc:real
inicio
// Se��o de Comandos
escreva("Entre com a temperatura em Graus Farenheit:") // Imprime na tela o texto
leia(tf)        // Recebe a temperatura

tc <- (5* (tf - 32)/9)   // Converte de Farenheit p/ Celsius

escreval(tc," Graus Celsius")  // Imprime na tela o resultado

fimalgoritmo
