sql: sqlParser.y sqlScanner.lex
	bison -d sqlParser.y
	flex -o sqlScanner.lex.c sqlScanner.lex
	gcc -o sql sqlScanner.lex.c sqlParser.tab.c -lfl 

clean:
	rm -f *.c *.h sql

test: sql
	./sql
