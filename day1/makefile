main:main.o add.o sub.o
	gcc -o main main.o add.o sub.o
main.o:main.c
	gcc -c -o main.o main.c
add.o:add.c
	gcc -c -o add.o	add.c
sub.o:sub.c
	gcc -c -o sub.o	sub.c
clean:
	rm -rf main.o add.o sub.o
