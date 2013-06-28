algoritmo "maior_num"
// Função : Compara 2 numeros e mostra o maior valor
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
n1,n2: real
inicio

escreva("Entre com o primeiro numero: ") // Imprime na tela o texto
leia (n1)     // Recebe o primeiro numero

escreva("Entre com o segundo numero: ")  // Imprime na tela o texto
leia (n2)    // Recebe o segundo numero


se (n1 > n2)entao       // Verifica se n1 é maior que n2
    escreva(n1," E maior que: ",n2)   // Imprime na tela o texto
senao     // Caso a condição não seja verdadeira, a segunda passa a ser válida
    escreva(n2," E maior que: ",n1)   // Imprime na tela o texto
fimse     // Encerra o comando se

fimalgoritmo
