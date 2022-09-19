all: main.o Sequence.o
	g++ main.o Sequence.o -o all

main.o: main.cpp Parameter.hpp
	g++ -c main.cpp  

sequence.o: Sequence.cpp 
	g++ -c Sequence.cpp 

clean:
	rm *.o all