algoritmo "string_vertical_escada_invertida"
// Fun��o : Recebe uma string e retorna na vertical_escada_invertida
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis
nome: caractere
i,j: inteiro

inicio
// Se��o de Comandos

escreval ("Insira o nome: ")
leia(nome)
para i de compr(nome) ate 1 passo -1 faca
      escreval("")
      para j de 1 ate i   faca
        escreva(copia(nome,j,1))
      fimpara
fimpara
fimalgoritmo
