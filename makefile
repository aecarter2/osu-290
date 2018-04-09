main: main.o letters.o  
	g++ -std=c++11 main.o letters.o -o main

main.o: main.cpp 
	g++ -c main.cpp

letters.o: letters.cpp letters.hpp
	g++ -c letters.cpp

clean:
	rm -f *.o
