algoritmo "nota"

var
n1, n2, nota: real

inicio

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
