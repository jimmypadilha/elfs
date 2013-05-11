algoritmo "Farenheit_Celsius"
// Função : converte de  Farenheit p/ Celsius
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
tf, tc:real
inicio
// Seção de Comandos
escreva("Entre com a temperatura em Graus Farenheit:") // Imprime na tela o texto
leia(tf)        // Recebe a temperatura

tc <- (5* (tf-32)/9)   // Converte de Farenheit p/ Celsius

escreval(tc," Graus Celsius")  // Imprime na tela o resultado

fimalgoritmo
