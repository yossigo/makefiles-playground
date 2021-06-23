
all: myprog

myprog: myprog.o
	gcc -o myprog myprog.o

myprog.o: myprog.c
	gcc -c myprog.c

# What's wrong here?
clean:
	rm myprog myprog.o
