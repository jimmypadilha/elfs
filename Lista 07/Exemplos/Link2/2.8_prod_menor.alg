algoritmo "prod_menor"
// Funcao : Recebe tr�s pre�os, ordena e Imprime o menor deles.
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis
 num1, num2, num3, menor: inteiro
 prod1, prod2, prod3, mprod: caracter

inicio
// Se��o de Comandos
    escreval("Digite o nome do produto: ")
    leia(prod1)
    escreval("Digite um pre�o: ")
    leia(num1)
    escreval("Digite o nome do produto: ")
    leia(prod2)
    escreval("Digite um pre�o: ")
    leia(num2)
    escreval("Digite o nome do produto: ")
    leia(prod3)
    escreval("Digite um pre�o: ")
    leia(num3)

    menor<- num1
    mprod<- prod1
    
    // Comparacao menor pre�o
    se(num2<menor) entao
      menor<-num2
      mprod<-prod2
      fimse
     se(num3<menor) entao
            menor<-num3
            mprod<-prod3
    fimse
   escreval(mprod,", � a melhor compra ao pre�o de: ", menor)

fimalgoritmo
