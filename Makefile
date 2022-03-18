all: projecta

projecta: projecta.o
	gcc projecta.o -o projecta

projecta.o: projecta.c

%.o: %.c
	gcc -c $<

clean: 
	rm -rf projecta *.o