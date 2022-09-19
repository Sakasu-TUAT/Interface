all: main.o test.o
	g++ main.o Test.o -o all

main.o: main.cpp Parameter.hpp
	g++ -c main.cpp  

test.o: Test.cpp 
	g++ -c Test.cpp 

clean:
	rm *.o all