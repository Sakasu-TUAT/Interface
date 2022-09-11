all: main.o Point2D.o
	g++ main.o Point2D.o -o all

main.o: main.cpp 
	g++ -c main.cpp  

Point2D.o: Point2D.cpp
	g++ -c Point2D.cpp

clean:
	rm *.o all
