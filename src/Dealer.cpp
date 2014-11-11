#include "headers/Dealer.h"
#include "headers/Card.h"
#include "headers/Deck.h"


Card* Dealer::dealCard() {
	return this->deck.getRandomCard();
}


void Dealer::receiveHand(Hand* h) {
	this->hand = h;
}


void Dealer::receiveCard(Card* c) {
	this->hand->addCard(c);
}


int Dealer::currentBlackjackSum() {
	return this->hand->getBlackjackSum();
}