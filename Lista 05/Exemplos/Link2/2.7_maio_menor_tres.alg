algoritmo "maior_tres"
// Funcao : Recebe três números, ordena do maior para o menor e Imprime o maior e o menor deles.
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
 num1, num2, num3, maior, menor: inteiro

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
   escreval(maior, " É o maior numero enquanto o menor é: ", menor)

fimalgoritmo
