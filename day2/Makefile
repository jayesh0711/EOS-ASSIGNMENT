

main:main.o add.o
	gcc -o main main.o add.o

main.o:main.c 
	gcc -c -o main.o main.c

add.o:add.c
	gcc -c -o add.o add.c

lib:add.o
	ar crv libjayesh.a add.o

clean:
	rm -rf main.o add.o main libjayesh.a 




