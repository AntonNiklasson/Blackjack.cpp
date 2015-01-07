#include <iostream>
#include <vector>
#include "headers/Blackjack.h"
#include "headers/TurnHandler.h"
#include "headers/Player.h"
#include "headers/Dealer.h"

using namespace std;


Blackjack::Blackjack() {
	cout << "In Blackjack::Blackjack()!" << endl;
}


void Blackjack::dealCardsToAll() {
	for(Player* player : this->players) {

		cout << "Dealing cards to " << player->toString() << endl;

		Card* first = this->dealer.dealCard();
		Card* second = this->dealer.dealCard();

		cout << endl;
		cout << player->toString() << ":" << endl;
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

	dealCardsToAll();

	cout << "Dealt cards to all" << endl;

	for(Player* currentPlayer : this->players) {
		this->turnHandler->handlePlayersTurn(currentPlayer);
	}

	this->turnHandler->finishDealersTurn();

	this->turnHandler->presentTurnOutcome();
}


void Blackjack::addPlayer(Player* p) {
	this->players.push_back(p);
};
