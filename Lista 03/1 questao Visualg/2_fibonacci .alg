algoritmo "Serie de Fibonnaci 2"
// Função : exibe os n primeiros numeros da cadeia ate que o valor seja maior 500
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações
var

cont,numero,atual,anterior:inteiro


inicio
// Seção de Comandos
   numero <-0
   cont<- 2
   escreva("0-1")
   atual <-1
   anterior <-0
     repita
         numero <-atual + anterior
          escreva("-",numero,"")
          anterior<- atual
          atual<-numero
          cont<- cont +1
     ate(atual > 500)
   escreval("")
   escreval("O numero do termo que parou foi: ",cont)

fimalgoritmo
