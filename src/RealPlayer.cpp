#include <string>
#include "headers/RealPlayer.h"
#include "headers/Player.h"

using namespace std;

RealPlayer::RealPlayer(std::string name) : Player(name) {
	// Empty for now.
}

int Player::askForAction() {
	int nextAction = 0;
	std::string rawInput;

	do {
		cout << endl;
		cout << "What is your next move?" << endl;
		cout << "1. Hit" << endl;
		cout << "2. Stop" << endl;
		cin >> rawInput;

		nextAction = std::atoi(rawInput.c_str());

	} while(nextAction < 1 || nextAction > 3);

	return nextAction;
}