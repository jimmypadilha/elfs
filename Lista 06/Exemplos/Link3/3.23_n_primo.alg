algoritmo "Imprime os numeros primos"
// Fun��o : Imprime os numeros primos de 1 ate "n"
// Autor :  grupo 4
// Data : 7/5/2013
// Se��o de Declara��es 
var
// Declara��o de vari�veis

numero, cont, divcont, i, j:inteiro


inicio
// Se��o de Comandos 

   escreval("Insira o numero:")
    leia(numero)
    cont <- 0
    i <- 2
    j <- 1
    
    se numero <=0 entao
    escreval ("Numero Inv�lido!")
    fimse
    
    enquanto i <= numero faca
             enquanto j <= i faca
                      se ((i mod j)=0) entao
                      cont <- cont + 1
                      fimse
                      j <- j + 1
             fimenquanto
             divcont <- divcont + cont
             
             se cont=2 entao
             escreval (i," � primo!")
             fimse

             i <- i + 1
             j <- 1
             cont <- 0
    fimenquanto
    divcont <- divcont - 1
    escreval (divcont, ", foram o numero de divis�es realizadas")
fimalgoritmo
