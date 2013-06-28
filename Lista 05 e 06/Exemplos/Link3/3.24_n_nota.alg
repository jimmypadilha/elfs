algoritmo "n_notas"
// Funções : Recebe "N" notas e calcula a média.
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
ni, ntotal, cont, media: real

inicio
// Seção de Comandos
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
escreva("A media é: ", media)

fimalgoritmo
