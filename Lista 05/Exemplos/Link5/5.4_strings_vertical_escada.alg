algoritmo "string_vertical_escada"
// Função : Recebe uma string e retorna na vertical_escada
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
nome: caractere
i,j: inteiro

inicio
escreval ("Insira o nome: ")
leia(nome)
para i de 1 ate compr(nome) faca
      escreval
      para j de 1 ate i faca
        escreva(copia(nome,j,1))
      fimpara
fimpara
fimalgoritmo
