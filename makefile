all: 12_main.o 12_functions.o
	gcc -o 12_program 12_main.o 12_functions.o

12_main.o: 12_main.c 12_headers.h
	gcc -c 12_main.c

12_functions.o: 12_functions.c
	gcc -c 12_functions.c
