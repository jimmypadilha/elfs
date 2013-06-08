algoritmo "n_notas"
// Função : Recebe "N" idades de pessoas,  pela média de idade define: 0-25>>Jovem, 26-60>>Adulta, 60< Idosa
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
iinicial, ptotal, cont, media: real

inicio
// Seção de Comandos
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
                   escreva("Turma jovem! Média de idade: ", media)
              fimse
              
              se (media > 25) e (media <= 60) entao
                   escreva("Turma Adulta! Média de idade: ", media)
              fimse

              se (media > 60) entao
                   escreva("Turma Idosa! Média de idade: ", media)
              fimse

fimalgoritmo
