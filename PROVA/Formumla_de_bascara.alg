algoritmo "Formula de bascara"
// Fun��o :
// Autor :
// Data : 25/5/2013
// Se��o de Declara��es 
var
x1, x2, delta, a, b, c: real
inicio
escreval("Informe a: ")
leia(a)
escreval("Informe b: ")
leia(b)
escreval("Informe c: ")
leia(c)
delta <- b^2*(4*a*c)
x1<-(-1*(b)+raizq(delta))/(2*a)
x2<-(-1*(b)-raizq(delta))/(2*a)
escreval("x1 = ",x1)
escreval("x2 = ",x2)
fimalgoritmo
