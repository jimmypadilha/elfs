algoritmo "n_notas"
// Fun��o : Recebe "N" idades de pessoas,  pela m�dia de idade define: 0-25>>Jovem, 26-60>>Adulta, 60< Idosa
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis
iinicial, ptotal, cont, media: real

inicio
// Se��o de Comandos
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
