algoritmo "compara_string"
// Função : Recebe duas strings informa o conteudo, comprimento e se são iguais ou não
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis

tamanho1, tamanho2, i, j:inteiro
vetor: string_1[1..100], string_2[1..100]:caracter

inicio

// Seção de Comandos
escreva("Entre com a sttring: ") // Imprime na tela o texto
leia (string_1)   // lê o valor digitado
escreva("Entre com a sttring: ") // Imprime na tela o texto
leia (string_2)   // lê o valor digitado

escreval ("string1: ", string_1)
tamanho1 <- compr(string_1)
escreval ("Tamanho: ", tamanho1)

escreval ("string2: ", string_2)
tamanho2 <- compr(string_2)
escreval ("Tamanho: ", tamanho2)

se (tamanho1 = tamanho2) entao
escreval ("String tem o mesmo tamanho")
senao
escreval ("Strings com tamanhos diferentes")
fimse



fimalgoritmo
