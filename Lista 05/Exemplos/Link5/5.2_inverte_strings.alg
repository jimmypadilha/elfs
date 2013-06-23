algoritmo "inverte_string"
// Função : Recebe uma string e a inverte com letra MAIUSCULAS
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis

nome, emon: caractere
i: inteiro
inicio
escreval ("Insira o nome: ")
leia(nome)

para i de compr(nome) ate 1 passo -1 faca
     emon <- emon + maiusc(copia(nome,i,1))
fimpara
escreva(emon)
// Seção de Comandos
fimalgoritmo
