algoritmo "Serie de Fibonnaci"
// Função : exibe os n primeiros numeros da cadeia
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações
var

cont,n,numero,atual,anterior:inteiro


inicio
// Seção de Comandos
   cont <- 0
   escreval("Quantos numero voce quer ver da cadeia? Insira:")
   leia(n)

   se n<= 0 entao
      escreval("numero invalido")
   senao
    se(n = 1)entao
     escreval("")
     escreval("O primeiro numero da cadeia e:")
     escreval("1")
    senao
      escreval("")
      escreval("Os",n,"n numero da cadeia:")
      se(n=2) entao
        escreval("1 1")
      senao
        escreva("1 1")
        atual <-1
        anterior <-1
        repita
          numero <-atual + anterior
          escreva("-",numero,"")
          anterior<- atual
          atual<-numero
          cont<-cont+1
        ate(cont = n -2)
      fimse
    fimse
   fimse


fimalgoritmo
