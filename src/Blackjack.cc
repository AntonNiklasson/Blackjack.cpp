#include <iostream>
#include <vector>
#include "headers/Blackjack.h"
#include "headers/TurnHandler.h"
#include "headers/Player.h"
#include "headers/Dealer.h"

using namespace std;


void Blackjack::dealCardsToAll() {
	for(Player* player : this->players) {
		Card* first = this->dealer.dealCard();
		Card* second = this->dealer.dealCard();

		cout << endl;
		cout << "Player " << player->toString() << " was delt:" << endl;
		cout << first->toString() << endl;
		cout << second->toString() << endl;

		player->receiveHand(new Hand(first, second));
	}

	Card* first = this->dealer.dealCard();
	Card* second = this->dealer.dealCard();

	cout << endl;
	cout << "The dealer was dealt:" << endl;
	cout << first->toString() << endl;
	cout << second->toString() << endl;

	this->dealer.receiveHand(new Hand(first, second));
}


void Blackjack::playRound() {

	int* nextAction = 0;

	dealCardsToAll();

	for(Player* currentPlayer : this->players) {
		this->turnHandler->handlePlayersTurn(currentPlayer);
	}

	this->turnHandler->finishDealersTurn();
}


void Blackjack::addPlayer(Player* p) {
	this->players.push_back(p);
};
