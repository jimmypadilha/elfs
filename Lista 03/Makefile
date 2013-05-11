GCC = gcc
FILE = compilador_v1
FOLDER1 = Link1
FOLDER2 = Link2
FOLDER3 = Link3
FLEX = flex

.PHONY: clean

# This is the default task
compile:
	@ $(FLEX) -o $(FILE).lex.c $(FILE).lex
	@ $(GCC) -o $(FILE) $(FILE).lex.c -lfl

clean:
	@ echo Cleaning...
	rm -rf $(FILE).lex.c $(FILE)
	@ echo

test:
	@ echo testing
	./$(FILE) $(FOLDER1)/*
	./$(FILE) $(FOLDER2)/*
	./$(FILE) $(FOLDER3)/*
