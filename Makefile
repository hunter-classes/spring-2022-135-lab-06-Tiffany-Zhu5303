main: main.o caesar.o
	g++ -o main main.o caesar.o

tests: tests.o funcs.o
	g++ -o tests tests.o something.o

test-ascii: test-ascii.cpp
	g++ -o test-ascii test-ascii.cpp

caesar.o: caesar.cpp caesar.h

main.o: main.cpp caesar.h

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main.o caesar.o tests.o main test-ascii
