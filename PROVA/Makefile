bascara: bascara.y bhaskara.lex
	bison -d bascara.y
	flex -o bhaskara.lex.c bhaskara.lex
	gcc -o bascara bhaskara.lex.c bascara.tab.c -lfl 

clean:
	rm -f *.c *.h sql

test: bascara
	./bascara
