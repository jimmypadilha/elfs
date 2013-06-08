algoritmo "primo n primo"
// Função : Verifica se o numero é primo, caso contrário imprime os numero divisíveis por ele
// Autor :  grupo 4
// Data : 7/5/2013
// Seção de Declarações 
var
// Declaração de variáveis

numero, cont, divcont, i, j:inteiro


inicio
// Seção de Comandos

   escreval("Insira o numero:")
    leia(numero)
    cont <- 0
    i <- 2
    j <- 1

    se numero <=0 entao
    escreval ("Numero Inválido!")
    fimse

    para i de 1 ate numero faca
         se ((numero mod i)=0) entao
         cont <- cont + 1
         fimse
    fimpara

    se cont=2 entao
             escreval (Numero," É primo!")
             senao
             escreval (Numero," Não é primo!")
                  para i de 1 ate numero faca
                       se ((numero mod i)=0) entao
                     escreval (i," é divisível por",numero)
                     fimse
                  fimpara
    fimse
    
fimalgoritmo
