all: main.o Boolean.o
	g++ main.o Boolean.o -o all

main.o: main.cpp 
	g++ -c main.cpp  

Boolean.o: Boolean.cpp
	g++ -c Boolean.cpp

clean:
	rm *.o all
