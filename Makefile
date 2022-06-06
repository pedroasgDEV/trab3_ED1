all:
	gcc -c busca.c -Wall
	gcc -c principal.c -Wall
	gcc busca.o principal.o -o exe

run:
	make 
	./exe < 1.in > out.out
	diff out.out 1.out

clear:
	clear
	rm *.o out.out exe
