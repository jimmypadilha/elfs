GCC = gcc
FILE = compilador_v1
DATA = lista_email.txt
FLEX = flex

.PHONY: clean

# This is the default task
compile:
	@ $(FLEX) -o $(FILE).lex.c $(FILE).lex
	@ $(GCC) -o $(FILE) $(FILE).lex.c -lfl

clean:
	@ echo Cleaning...
	#rm -rf $(BIN_DIR)/
	#find . -name  *.*~ -print0 | xargs -0 rm -rf
	#find . -name  *~ -print0 | xargs -0 rm -rf
	@ echo

test:
	@ testing file with emails
	./$(FILE) $(DATA)
