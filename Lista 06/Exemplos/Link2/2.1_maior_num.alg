algoritmo "maior_num"
// Fun��o : Compara 2 numeros e mostra o maior valor
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis
n1,n2: real
inicio

escreva("Entre com o primeiro numero: ") // Imprime na tela o texto
leia (n1)     // Recebe o primeiro numero

escreva("Entre com o segundo numero: ")  // Imprime na tela o texto
leia (n2)    // Recebe o segundo numero


se (n1 > n2)entao       // Verifica se n1 � maior que n2
    escreva(n1," E maior que: ",n2)   // Imprime na tela o texto
senao     // Caso a condi��o n�o seja verdadeira, a segunda passa a ser v�lida
    escreva(n2," E maior que: ",n1)   // Imprime na tela o texto
fimse     // Encerra o comando se

fimalgoritmo
