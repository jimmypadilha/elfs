algoritmo "n_notas"

var
ni, ntotal, cont, media: real

inicio

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
