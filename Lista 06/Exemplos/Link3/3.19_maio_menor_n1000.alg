algoritmo "Recebe n n�meros"
// Funcao : Recebe "N" n�meros "Entre 0 e 100" e Imprime a soma do maior e o menor deles.
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis
 soma, n, cont, numero, maior, menor: inteiro

inicio
// Se��o de Comandos


    escreval("Digite a quantidade de numeros: ")
    leia(n)
    se (n>0) entao
    
    escreval("Digite um numero: ")
    leia(numero)
    
    se (0 < numero) e (numero < 1001) entao
    
    maior<- numero
    menor<- numero
    
    
    // Comparacao

       para cont de 2 ate n faca

         escreval("Digite um numero: ")
         leia(numero)
         
         se(numero>maior) entao
         maior<- numero
         fimse
         se(numero<menor) entao
         menor<- numero
         fimse
         cont <- cont + 1
         
    fimpara
    

    soma <- maior + menor
    
   escreval(soma, " � a soma do maior ", maior, " e do menor ", menor)
  senao
       escreval ("Valor Inv�lido")
       
 fimse
     senao
     escreval ("Numero inv�lido")
fimse

 
fimalgoritmo
