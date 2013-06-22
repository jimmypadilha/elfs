algoritmo "mas_fem"
// Função : Recebe "M" - maculino, "F" - feminino
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
  sex: caracter
inicio
// Seção de Comandos
escreval ("Entre com 'M'-masculino ou 'F'-feminino") // Imprime na tela o texto
leia(sex)        // Recebe o caracter digitado
  escolha sex    // Comando para definir as opções
        caso "M"  // Caso digitado o primeiro parametro imprime a linha abaixo
             escreval ("Masculino")  // Imprime na tela o texto
        caso "F"  // Caso digitado o segundo parametro imprime a linha abaixo
            escreval ("Feminino")    // Imprime na tela o texto
        outrocaso   // Se as condições acima seja falsas...
                  escreval("Sexo inválido!") // Imprime na tela o texto
  fimescolha   //Encerra o comando escolha
fimalgoritmo
