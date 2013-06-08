algoritmo "fatorial de um numero "
// Função : Calcula o fatorial entre 0 e 16, varias vezes
// Autor :  grupo 4
// Data : 7/5/2013
// Seção de Declarações 
var
// Declaração de variáveis

op :caracter
cont,i,numero,fatorial :inteiro


inicio
// Seção de Comandos


                escreval("Digite 'S' para executar e 'N' para sair")
                leia (op)
                
                     escolha op
                             caso 's'

                             caso 'n'
                escreval ("...Saindo")
                        interrompa
                fimescolha
                

                escreval("Insira o numero para determinar o fatorial")
                leia(numero)

                fatorial <- 1
    
                se (0 > numero) e (numero < 16) entao
                escreval ("Numero inválido!")
                fimse
    
                se(numero = 0) entao
                fatorial <- 1
                senao
                para i de 1 ate numero faca
                fatorial<- fatorial *i
                fimpara
                fimse
                escreval("O fatorial de",numero," e", fatorial)
                

fimalgoritmo
