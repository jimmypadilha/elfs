algoritmo "primo"
// Função : Verifica se o numero é primo
// Autor :  grupo 4
// Data : 7/5/2013
// Seção de Declarações 
var
// Declaração de variáveis

numero, cont, i:inteiro


inicio
// Seção de Comandos 

   escreval("Insira o numero:")
    leia(numero)
    cont <- 0
    
    se numero <=0 entao
    escreval ("Numero Inválido!")
    fimse
    
    para i de 1 ate numero faca
         se ((numero mod i)=0) entao
         cont <- cont + 1
         fimse
    fimpara
    
    se cont=2 entao
             escreval (numero," É primo!")
             senao
             escreval (numero," Não é primo!")
             fimse
fimalgoritmo
