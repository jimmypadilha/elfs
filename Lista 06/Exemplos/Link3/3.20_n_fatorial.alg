algoritmo "fatorial de um numero "
// Fun��o : Calcula o fatorial entre 0 e 16, varias vezes
// Autor :  grupo 4
// Data : 7/5/2013
// Se��o de Declara��es 
var
// Declara��o de vari�veis

op :caracter
cont,i,numero,fatorial :inteiro


inicio
// Se��o de Comandos
                
repita
                
                escreval("Insira o numero para determinar o fatorial")
                leia(numero)

                fatorial <- 1
    
                se (0 > numero) e (numero < 16) entao
                escreval ("Numero inv�lido!")
                
                senao
                para i de 1 ate numero faca
                fatorial <- fatorial * i
                fimpara
                
                fimse
                
                escreval("O fatorial de",numero," e", fatorial)
                
                escreval(" 'sim' >> Para executar, 'nao' >> Sair")
                leia (op)

                escolha op
                caso "sim"
                escreval("Executando")

                caso "nao"
                escreval("Saindo")
                interrompa

                fimescolha
fimrepita
                

fimalgoritmo
