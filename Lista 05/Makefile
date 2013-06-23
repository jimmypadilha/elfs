elfs: elfs.y elfs.lex
	bison -d elfs.y
	flex -o elfs.lex.c elfs.lex
	gcc -o elfs elfs.lex.c elfs.tab.c -lfl 

clean:
	rm -f *.c *.h elfs

test: sql
	./elfs
