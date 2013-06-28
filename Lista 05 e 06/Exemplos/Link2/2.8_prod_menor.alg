algoritmo "prod_menor"
// Funcao : Recebe três preços, ordena e Imprime o menor deles.
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
 num1, num2, num3, menor: inteiro
 prod1, prod2, prod3, mprod: caracter

inicio
// Seção de Comandos
    escreval("Digite o nome do produto: ")
    leia(prod1)
    escreval("Digite um preço: ")
    leia(num1)
    escreval("Digite o nome do produto: ")
    leia(prod2)
    escreval("Digite um preço: ")
    leia(num2)
    escreval("Digite o nome do produto: ")
    leia(prod3)
    escreval("Digite um preço: ")
    leia(num3)

    menor<- num1
    mprod<- prod1
    
    // Comparacao menor preço
    se(num2<menor) entao
      menor<-num2
      mprod<-prod2
      fimse
     se(num3<menor) entao
            menor<-num3
            mprod<-prod3
    fimse
   escreval(mprod,", é a melhor compra ao preço de: ", menor)

fimalgoritmo
