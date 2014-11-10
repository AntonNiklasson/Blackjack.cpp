#include "headers/Blackjack.h"
#include "headers/TurnHandler.h"

using namespace std;


TurnHandler::TurnHandler(Blackjack* game) {
	this->game = game;
}


void TurnHandler::handlePlayersTurn(Player* player) {
	this->player = player;
	this->turnIsDone = false;

	this->printTurnHeader();

	while(!this->turnIsDone) {
		int action = this->askForAction();
		this->executeAction(action);
	}

	cout << player->toString() << "'s turn ended" << endl;
}


void TurnHandler::printTurnHeader() {
	cout << endl;
	cout << "=== " + this->player->toString() + "'s turn! ===" << endl;
}


int TurnHandler::askForAction() {
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


void TurnHandler::executeAction(int action) {
	switch(action) {
		case 1: {
			Card* newCard = this->game->dealer.dealCard();
			this->player->receiveCard(newCard);

			cout << endl;
			cout << "You got: " + newCard->toString() << endl;
			cout << endl;

			int currentBlackjackSum = this->player->getHand()->getBlackjackSum();

			if(currentBlackjackSum > 21) {
				cout << "You just got fat! :(" << endl;
				this->turnIsDone = true;
			} else if(currentBlackjackSum == 21) {
				cout << "BLACKJACK!!!" << endl;
				this->turnIsDone = true;
			} else {
				cout << "You now have the following hand:" << endl;
				this->player->printHand();
				this->turnIsDone = false;
			}

			break;
		}
		case 2: {
			cout << endl;
			cout << "You chose to stop at " << this->player->getHand()->getBlackjackSum() << endl;
			this->turnIsDone = true;

			break;
		}
	}
}


void finishDealersTurn() {
	// Grab new card...
	// If sum over 21, handle getting fat.
	// If sum still lower than 17, hit again.
	// If sum over, or equal to 17, stop.
}