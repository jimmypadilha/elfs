algoritmo "Recebe n números"
// Funcao : Recebe "N" números e Imprime a soma do maior e o menor deles.  defeito
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
 soma, n, cont, numero, maior, menor: inteiro

inicio
// Seção de Comandos
    escreval("Digite a quantidade de numeros: ")
    leia(n)
    escreval("Digite um numero: ")
    leia(numero)
    
    maior<- 1
    menor<- 1
    
    // Comparacao

    para cont de 1 ate 10 faca

         se(numero>maior) entao
         maior<- numero
         fimse
         
    fimpara
    
    escreval ("Ok1")
    
    para cont de 1 ate n faca

         se(numero<menor) entao
         menor<- numero
         fimse
         
    fimpara
    
    escreval ("Ok2")
    
    //soma <- maior + menor
   escreval(soma, " É a soma do maior ", maior, " e do menor ", menor)
   
fimalgoritmo
