algoritmo "inverte_string"
// Fun��o : Recebe uma string e a inverte com letra MAIUSCULAS
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis

nome, emon: caractere
i: inteiro
inicio
escreval ("Insira o nome: ")
leia(nome)

para i de compr(nome) ate 1 passo -1 faca
     emon <- emon + maiusc(copia(nome,i,1))
fimpara
escreva(emon)
// Se��o de Comandos
fimalgoritmo
