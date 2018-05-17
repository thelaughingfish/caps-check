
capscheck: capscheck.o
	gcc -o capscheck capscheck.o

capscheck.o: capscheck.c
	gcc -c capscheck.c

clean:
	rm *.o capscheck