all: my_mat.o main.o main

main: main.o my_mat.o
	gcc -c -Wall $@ $^

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -o $^ 

main.o: main.c my_mat.h
	gcc -Wall -o $^ 

