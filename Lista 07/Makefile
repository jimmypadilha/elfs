elfs: elfs.y elfs.lex
	bison -d elfs.y
	flex -o elfs.lex.c elfs.lex
	gcc -o elfs elfs.lex.c elfs.tab.c -lfl

clean:
	rm -f *.tab.c *.lex.c traducao.c *.tab.h elfs Makefile~

test_all: 
	./elfs Exemplos/Link1/1.1_Ola_Mundo.alg
	./elfs Exemplos/Link1/1.2_numero.alg
	./elfs Exemplos/Link1/1.3_soma.alg
	./elfs Exemplos/Link1/1.4_media.alg
	./elfs Exemplos/Link1/1.5_m_cm.alg
	./elfs Exemplos/Link1/1.6_area_circulo.alg
	./elfs Exemplos/Link1/1.7_area_quadrado.alg
	./elfs Exemplos/Link1/1.8_horas_trab.alg
	./elfs Exemplos/Link1/1.9_farenheit_celsius.alg
	./elfs Exemplos/Link1/1.10_celsius_farenheit.alg
	./elfs Exemplos/Link2/2.1_maior_num.alg
	./elfs Exemplos/Link2/2.2_pos_neg.alg
	./elfs Exemplos/Link2/2.3_mas_fem.alg
	./elfs Exemplos/Link2/2.4_vog_con.alg
	./elfs Exemplos/Link2/2.5_nota.alg
	./elfs Exemplos/Link2/2.6_maio_tres.alg
	./elfs Exemplos/Link2/2.7_maio_menor_tres.alg
	./elfs Exemplos/Link2/2.8_prod_menor.alg
	./elfs Exemplos/Link2/2.9_decrescente_tres.alg
	./elfs Exemplos/Link3/3.15_fibonacci_ntermos\ .alg
	./elfs Exemplos/Link3/3.16_fibonacci_500\ .alg
	./elfs Exemplos/Link3/3.17_fatorial.alg
	./elfs Exemplos/Link3/3.18_maio_menor_n.alg
	./elfs Exemplos/Link3/3.19_maio_menor_n1000.alg
	./elfs Exemplos/Link3/3.20_n_fatorial.alg
	./elfs Exemplos/Link3/3.21_primo.alg
	./elfs Exemplos/Link3/3.22_primon_n_primo.alg
	./elfs Exemplos/Link3/3.23_n_primo.alg
	./elfs Exemplos/Link3/3.24_n_nota.alg
	./elfs Exemplos/Link3/3.25_n_idade.alg
	./elfs Exemplos/Link4/4.1_mesmo_num_lin.alg
	./elfs Exemplos/Link4/4.2_diferente_num_lin.alg
	./elfs Exemplos/Link4/4.3_soma_tres.alg
	./elfs Exemplos/Link4/4.4_função_Pos_Neg.alg
	./elfs Exemplos/Link4/4.5_impos_custo.alg
	./elfs Exemplos/Link5/5.1_com_strings.alg
	./elfs Exemplos/Link5/5.2_inverte_strings.alg
	./elfs Exemplos/Link5/5.3_strings_vertical.alg
	./elfs Exemplos/Link5/5.4_strings_vertical_escada.alg
	./elfs Exemplos/Link5/5.5_strings_vertical_escada_invertida.alg
	./elfs Exemplos/nota_uea.alg

test_um: 
	./elfs maior.alg
