algoritmo "nota"
// Funcao : Recebe dua notas, calcula a média e define: 0-6.9>>Reprovado, 7.0-9.9>>Aprovado, 10.0>>Aprovado com Distinção.
// Autor : grupo 4
// Data : 7/5/2013
// Seção de Declarações

var
// Declaração de variáveis
n1, n2, nota: real

inicio
// Seção de Comandos
escreva("Digite a nota1: ")
leia (n1)
escreva("Digite a nota2: ")
leia (n2)

nota <- ((n1 + n2) / 2)

se (nota = 10) Entao
   escreva("Aluno Aprovado com Distinção!")
Senao
    se (nota >=7.0) Entao
          escreva("Aluno Aprovado!")
    Senao
           escreva ("Aluno Reprovado!")
    fimse
fimse

fimalgoritmo
