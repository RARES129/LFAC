all:
	flex tema.l
	yacc -d tema.y
	gcc lex.yy.c y.tab.c -o exe
	./exe input.txt
