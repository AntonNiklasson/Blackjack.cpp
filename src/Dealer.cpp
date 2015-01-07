#include "headers/Dealer.h"
#include "headers/Card.h"
#include "headers/Deck.h"


Dealer::Dealer() {
	cout << "In Dealer::Dealer()!" << endl;
}


Card* Dealer::dealCard() {
	Card* card = deck.getRandomCard();
	return card;
}


void Dealer::receiveHand(Hand* h) {
	this->hand = h;
}


void Dealer::receiveCard(Card* c) {
	*(this->hand) += c;
}


int Dealer::currentBlackjackSum() {
	return this->hand->getBlackjackSum();
}