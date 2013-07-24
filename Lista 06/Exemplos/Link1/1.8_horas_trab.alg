algoritmo "horas_trab"
// Função : calcula a quantidade de horas trabalhadas pelo valor da hora
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
vhora, thora:real

inicio
// Seção de Comandos
escreva("Entre com o valor da hora trabalhada: ") // Imprime na tela o texto
leia(vhora)      // lê o valor digitado

escreva("Entre com a quantidade de horas trabalhadas: ") // Imprime na tela o texto
leia(thora)     // lê o valor digitado

vhora <- vhora*thora  // calcula o valor da hora pela quantidades de horas

escreval("O salário é: R$ ",vhora)  // Imprime na tela o resuldato

fimalgoritmo
