bascara: bascara.y bhaskara.lex
	bison -d bascara.y
	flex -o bhaskara.lex.c bhaskara.lex
	gcc -o sql bhaskara.lex.c bascara.tab.c -lfl 

clean:
	rm -f *.c *.h sql

test: sql
	./sql
