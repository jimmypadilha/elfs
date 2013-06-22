algoritmo "vog_con"
// Verifica se o caracter digitado é consoante ou vogal
var
  vc: caracter
inicio

escreval ("Entre com uma letra: ")
leia(vc)
  escolha vc
        caso "a","e","i","o","u"
             escreval ("Vogal!")
        outrocaso
                  escreval("Consoante!")
  fimescolha
fimalgoritmo
