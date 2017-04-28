#esto es un sencillo Makefile para compiral proy.c
exe: proy_1.o
	gcc -o exe proy_1.o

proy_1.o: proy_1.c suma.h
	gcc -c proy_1.c

clean: 
	rm *.o exe
	