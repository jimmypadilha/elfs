algoritmo "compara_string"
// Fun��o : Recebe duas strings informa o conteudo, comprimento e se s�o iguais ou n�o
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis
string1, string2: caractere
tam1, tam2:inteiro
inicio
escreva("Digite uma string: ")
leia(string1)
escreva("Digite outra string: ")
leia(string2)

// Imprime as strings
escreval("String 1: ", string1)
escreval("String 2: ", string2)

tam1 <- compr(string1)
tam2 <- compr(string2)

// Impress�o do n�mero de caracteres de cada string.
escreval("O tamanho de ",string1,":",tam1," caracteres.")
escreval("O tamanho de ",string2,":",tam2," caracteres.")

// verifica se as strings s�o do mesmo tamanho
se (tam1 <> tam2) entao
   escreval("As duas strings s�o de tamanhos diferentes.")
senao
     escreval("As duas strings s�o do mesmo tamanho.")
fimse

// verifica se as strings possuem o mesmo conteudo
se (string1 <> string2) entao
   escreval("As duas strings possuem conte�do diferente.")
senao
     escreval("As duas strings possuem o mesmo conte�do.")
fimse
fimalgoritmo
