algoritmo "função_somaImposto"
// Função : Recebe dois argumentos, calcula e retorna o valor do produto com imposto
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis

somaImposto, taxaImposto, custo, prod:real

procedimento somaImposto

inicio

prod <- custo + (custo* taxaImposto)
escreval ("Valor Final do Produto: ", prod)

fimprocedimento

inicio

// Seção de Comandos
escreval("Valor de custo do produto: ") // Imprime na tela o texto
leia (custo)   // lê o valor digitado
escreval("Porcentagem de imposto: ") // Imprime na tela o texto
leia (taxaImposto)   // lê o valor digitado

taxaImposto <- (taxaImposto/100)
somaImposto ()

fimalgoritmo
