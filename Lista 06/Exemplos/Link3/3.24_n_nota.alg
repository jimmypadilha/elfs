algoritmo "n_notas"
// Fun��es : Recebe "N" notas e calcula a m�dia.
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis
ni, ntotal, cont, media: real

inicio
// Se��o de Comandos
escreva("Digite a quantidade de notas: ")
leia (ntotal)
cont <- 0
ni <- 0
media <- 0


  enquanto (ntotal > cont) faca
         escreva("Digite a nota: ")
         leia (ni)
         media <- (media + ni)
         cont <- cont + 1
         
fimenquanto

media <- (media / ntotal)
escreva("A media �: ", media)

fimalgoritmo
