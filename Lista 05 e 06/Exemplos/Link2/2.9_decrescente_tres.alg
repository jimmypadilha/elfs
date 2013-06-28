algoritmo "decrescente_tres"
// Funcao : Recebe três números, ordena de forma descrescente e Imprime.
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
 num1, num2, num3, maior, menor, meio: inteiro

inicio
// Seção de Comandos
    escreval("Digite um numero: ")
    leia(num1)
    escreval("Digite um numero: ")
    leia(num2)
    escreval("Digite um numero: ")
    leia(num3)
    
    maior<- num1
    menor<- num1
    meio<- num1
    
    // Comparacao maior
    se(num2>maior) entao
      maior<-num2
    fimse
    se(num3>maior) entao
            maior<-num3
    fimse

    // Comparacao menor
    se(num2<menor) entao
      menor<-num2
      fimse
     se(num3<menor) entao
            menor<-num3
    fimse
    
    se (maior=num1) e (menor=num2) ou (maior=num2) e (menor=num1) entao
    meio<-num3
    fimse
    se (maior=num3) e (menor=num1) ou (maior=num1) e (menor=num3) entao
    meio<-num2
    senao
    meio<-num1
    fimse

   escreval(" A ordem decrescente é: ", maior, meio, menor)

fimalgoritmo
