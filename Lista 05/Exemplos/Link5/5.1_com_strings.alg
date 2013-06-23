algoritmo "compara_string"
// Função : Recebe duas strings informa o conteudo, comprimento e se são iguais ou não
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
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

// Impressão do número de caracteres de cada string.
escreval("O tamanho de '",string1,"':",tam1," caracteres.")
escreval("O tamanho de '",string2,"':",tam2," caracteres.")

// verifica se as strings são do mesmo tamanho
se (tam1 <> tam2) entao
   escreval("As duas strings são de tamanhos diferentes.")
senao
     escreval("As duas strings são do mesmo tamanho.")
fimse

// verifica se as strings possuem o mesmo conteudo
se (string1 <> string2) entao
   escreval("As duas strings possuem conteúdo diferente.")
senao
     escreval("As duas strings possuem o mesmo conteúdo.")
fimse
fimalgoritmo
