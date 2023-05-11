main: main.o funcs.o
	g++ -o main main.o funcs.o

funcs.o: funcs.h

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

main.o: main.cpp funcs.o
	g++ -c -std=c++11 main.cpp
	
tests.o: tests.cpp doctest.h funcs.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f *.o main tests a.out