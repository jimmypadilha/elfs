sql: sql.y sql.lex
	bison -d sql.y
	flex  -o sql.lex.c sql.lex
	gcc  -o sql sql.lex.c sql.tab.c -lfl -lm 

clean:
	rm -f *.c *.h sql
