algoritmo "maior_tres"

var
 num1, num2, num3,maior: inteiro

inicio
    escreval("Digite um numero: ")
    leia(num1)
    escreval("Digite um numero: ")
    leia(num2)
    escreval("Digite um numero: ")
    leia(num3)
    
    maior<-num1
    se(num2>maior) entao
       maior<-num2
       se (num3>maior) entao
          maior<-num3
       fimse
   fimse
   escreval("O maior numero é: ", maior)

fimalgoritmo
