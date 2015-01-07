all:
	g++ -c -std=c++11 src/*.cpp
	g++ -std=c++11 src/*.o Main.cpp -o bin/blackjack
	rm *.o
