algoritmo "fun��o_somaImposto"
// Fun��o : Recebe dois argumentos, calcula e retorna o valor do produto com imposto
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis

somaImposto, taxaImposto, custo, prod:real

procedimento somaImposto

inicio

prod <- custo + (custo* taxaImposto)
escreval ("Valor Final do Produto: ", prod)

fimprocedimento

inicio

// Se��o de Comandos
escreval("Valor de custo do produto: ") // Imprime na tela o texto
leia (custo)   // l� o valor digitado
escreval("Porcentagem de imposto: ") // Imprime na tela o texto
leia (taxaImposto)   // l� o valor digitado

taxaImposto <- (taxaImposto/100)
somaImposto ()

fimalgoritmo
