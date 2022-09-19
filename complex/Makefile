all: main.o Complex.o
	g++ main.o Complex.o -o all

main.o: main.cpp 
	g++ -c main.cpp  

Complex.o: Complex.cpp
	g++ -c Complex.cpp

clean:
	rm *.o all