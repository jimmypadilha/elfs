GCC = gcc
FLEX = flex
YACC = bison
FILE = sql

AnalisadorLexico = sqlScanner
AnalisadorSintatico = sqlParser

all:	${AnalisadorLexico} ${AnalisadorSintatico}

# Area de Execucao dos Arquivos

compile :
	@ ${YACC} -d pmysql.y
	@ $(FLEX) -o $(FILE).lex.c $(FILE).lex
	@ $(GCC) -o $(FILE) $(FILE).lex.c $(FILE).tab.c -lfl



clean:
	@ echo Cleaning...	
	rm -f *.c *.h compile

test:
	@ echo testing file
	make compile
	./$(FILE)
       

