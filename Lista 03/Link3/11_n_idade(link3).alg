algoritmo "n_notas"

var
iinicial, ptotal, cont, media: real

inicio

escreva("Digite a quantidade de pessoas: ")
leia (ptotal)
cont <- 0
iinicial <- 0
media <- 0


  enquanto (ptotal > cont) faca
         escreva("Digite a idade: ")
         leia (iinicial)
         media <- (media + iinicial)
         cont <- cont + 1
         
fimenquanto

media <- (media / ptotal)

     // escolha media
      
              se (media <= 25) entao
                   escreva("Turma jovem! M�dia de idade: ", media)
              fimse
              
              se (media > 25) e (media <= 60) entao
                   escreva("Turma Adulta! M�dia de idade: ", media)
              fimse

              se (media > 60) entao
                   escreva("Turma Idosa! M�dia de idade: ", media)
              fimse

fimalgoritmo
