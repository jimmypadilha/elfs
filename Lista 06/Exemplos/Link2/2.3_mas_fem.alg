algoritmo "mas_fem"
// Fun��o : Recebe "M" - maculino, "F" - feminino
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis
  sex: caracter
inicio
// Se��o de Comandos
escreval ("Entre com 'M'-masculino ou 'F'-feminino") // Imprime na tela o texto
leia(sex)        // Recebe o caracter digitado
  escolha sex    // Comando para definir as op��es
        caso "M"  // Caso digitado o primeiro parametro imprime a linha abaixo
             escreval ("Masculino")  // Imprime na tela o texto
        caso "F"  // Caso digitado o segundo parametro imprime a linha abaixo
            escreval ("Feminino")    // Imprime na tela o texto
        outrocaso   // Se as condi��es acima seja falsas...
                  escreval("Sexo inv�lido!") // Imprime na tela o texto
  fimescolha   //Encerra o comando escolha
fimalgoritmo
