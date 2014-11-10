all:
	g++ -c -std=c++11 src/*.cpp
	mv *.o src/
	g++ -std=c++11 src/*.o Main.cpp -o bin/blackjack
