algoritmo "nota_uea"
// Função :
// Autor :
// Data : 25/7/2013
// Seção de Declarações 
var
n1, n2, media, final: real
inicio
// Seção de Comandos 
escreva("Digite a nota1: ")
	leia (n1)
	escreva("Digite a nota2: ")
	leia (n2)
	media <- ((n1 + n2) / 2)

	se (media >= 8) Entao
   		escreva("Aluno Aprovado!")
	Senao
    		se (media >=4) Entao
          		escreval("Aluno na Final!")
    		escreval("Nota da Final!")
			leia (final)
			media <- ((n1+n2+final) / 3)
			se (media >= 6) Entao
   				escreva("Aluno Aprovado na Final!")
						
			Senao
				escreva ("Aluno Reprovado!")
			fimse
    		Senao
      			  escreva ("Aluno Reprovado!")

		fimse
	fimse
fimalgoritmo
