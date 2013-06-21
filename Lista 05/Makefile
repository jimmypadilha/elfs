elfs: elfs.y elfs.lex
	bison -d elfs.y
	flex -o elfs.lex.c elfs.lex
	gcc -o elfs elfs.lex.c elfs.tab.c -lfl 

clean:
	rm -f *.c *.h elfs

test: elfs
	./elfs Exemplos/Link_1/1.1_Ola_Mundo.alg
	./elfs Exemplos/Link_1/1.2_numero.alg
	./elfs Exemplos/Link_1/1.3_soma.alg
	./elfs Exemplos/Link_1/1.4_media.alg
	./elfs Exemplos/Link_1/1.5_m_cm.alg
	./elfs Exemplos/Link_1/1.6_area_circulo.alg
	./elfs Exemplos/Link_1/1.7_area_quadrado.alg
	./elfs Exemplos/Link_1/1.8_horas_trab.alg
	./elfs Exemplos/Link_1/1.9_farenheit_celsius.alg
	./elfs Exemplos/Link_1/1.10_celsius_farenheit.alg
