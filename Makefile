all: clean
	clang -Wall -pedantic -ansi --std=c17 -O3 main.c -o linum
clean:
	rm -f linum
install:
	cp linum $$HOME/bin
