algoritmo "primo n primo"
// Fun��o : Verifica se o numero � primo, caso contr�rio imprime os numero divis�veis por ele
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

    para i de 1 ate numero faca
         se ((numero mod i)=0) entao
         cont <- cont + 1
         fimse
    fimpara

    se cont=2 entao
             escreval (Numero," � primo!")
             senao
             escreval (Numero," N�o � primo!")
                  para i de 1 ate numero faca
                       se ((numero mod i)=0) entao
                     escreval (i," � divis�vel por",numero)
                     fimse
                  fimpara
    fimse
    
fimalgoritmo
