algoritmo "nota"
// Funcao : Recebe dua notas, calcula a m�dia e define: 0-6.9>>Reprovado, 7.0-9.9>>Aprovado, 10.0>>Aprovado com Distin��o.
// Autor : grupo 4
// Data : 7/5/2013
// Se��o de Declara��es

var
// Declara��o de vari�veis
n1, n2, nota: real

inicio
// Se��o de Comandos
escreva("Digite a nota1: ")
leia (n1)
escreva("Digite a nota2: ")
leia (n2)

nota <- ((n1 + n2) / 2)

se (nota = 10) Entao
   escreva("Aluno Aprovado com Distin��o!")
Senao
    se (nota >=7.0) Entao
          escreva("Aluno Aprovado!")
    Senao
           escreva ("Aluno Reprovado!")
    fimse
fimse

fimalgoritmo
