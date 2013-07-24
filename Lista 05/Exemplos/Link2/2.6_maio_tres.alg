algoritmo "maior_tres"
// Funcao : Recebe três números, ordena do maior para o menor e Imprime o maior deles.
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
 num1, num2, num3,maior: inteiro

inicio
// Seção de Comandos
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
          se(maior>num1) entao
             maior<-num1
          fimse
       fimse
   fimse
   escreval("O maior numero é: ", maior)

fimalgoritmo
