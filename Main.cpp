#include <string>
#include <iostream>
#include "src/headers/Blackjack.h"
#include "src/headers/RealPlayer.h"
#include "src/headers/AIPlayer.h"

using namespace std;


void printHeader() {
	system("clear");

	cout << "==================================" << endl;
	cout << "==========| BLACKJACK |===========" << endl;
	cout << "==================================" << endl;
}

void addPlayers(Blackjack* game) {
	const std::string name1 = "Anton";
	const std::string name2 = "Albin";
	const std::string name3 = "Axel";

	game->addPlayer(new RealPlayer(name1));
	game->addPlayer(new RealPlayer(name2));
	// game->addPlayer(new AIPlayer(name3));
}

int main() {

	Blackjack game;

	printHeader();
	addPlayers(&game);

	game.playRound();

	return 0;
}