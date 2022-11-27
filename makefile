all: mylib.o
	gcc -o main.out main.c mylib.o
mylib.o:
	gcc -o mylib.o -c mylib/mylib.c
time:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main.out timecomplex.c mylib.o 
	./main.out
space:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o space_iterative.out space_iterative.c mylib.o
	gcc -o space_recursive.out space_recursive.c mylib.o
clear:
	rm -rf *.o
	rm -rf *.out