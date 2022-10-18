App:App.c div.o add.o sub.o mul.o Arith.h
	gcc App.c add.o mul.o sub.o -o App libArth.App
add.o:add.c
	gcc -c add.c
mul.o:mul.c
	gcc -c mul.c
div.o:div.c
	gcc -c div.c
clean:
	rm *.o App


	