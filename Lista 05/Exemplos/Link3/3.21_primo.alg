algoritmo "primo"
// Fun��o : Verifica se o numero � primo
// Autor :  grupo 4
// Data : 7/5/2013
// Se��o de Declara��es 
var
// Declara��o de vari�veis

numero, cont, i:inteiro


inicio
// Se��o de Comandos 

   escreval("Insira o numero:")
    leia(numero)
    cont <- 0
    
    se numero <=0 entao
    escreval ("Numero Inv�lido!")
    fimse
    
    para i de 1 ate numero faca
         se ((numero mod i)=0) entao
         cont <- cont + 1
         fimse
    fimpara
    
    se cont=2 entao
             escreval (numero," � primo!")
             senao
             escreval (numero," N�o � primo!")
             fimse
fimalgoritmo
