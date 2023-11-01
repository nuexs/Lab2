calculate : dlMain.o add.o subtract.o multiply.o divide.o
	gcc -o calculate dlMain.o add.o subtract.o multiply.o divide.o

dlMain.o : dlMain.c
	gcc -c dlMain.c

add.o : add.c
	gcc -c add.c

subtract.o : subtract.c
	gcc -c subtract.c

multiply.o : multiply.c
	gcc -c multiply.c

divide.o : divide.c
	gcc -c divide.c

clean : 
	rm -f calculate dlMain.o add.o subtract.o multiply.o divide.o
