all: main.o Inheritance.o
	g++ main.o Inheritance.o -o all

main.o: main.cpp 
	g++ -c main.cpp  

Inheritance.o: Inheritance.cpp
	g++ -c Inheritance.cpp

clean:
	rm *.o all