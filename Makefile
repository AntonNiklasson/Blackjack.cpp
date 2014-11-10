all:
	g++ -c -std=c++11 src/*.cc
	mv *.o src/
	g++ -std=c++11 src/*.o Main.cc -o bin/blackjack