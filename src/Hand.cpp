#include <vector>
#include "headers/Hand.h"
#include "headers/Card.h"


void Hand::operator += (Card* card) {
	this->cards.push_back(card);
}


Hand::Hand(Card* first, Card* second) {
	this->addCard(first);
	this->addCard(second);
}


void Hand::addCard(Card* c) {
	cards.push_back(c);
}


std::vector<Card*> Hand::getAllCards() {
	return this->cards;
}


void Hand::printAllCards() {
	for(Card* card : this->cards) {
		cout << card->toString() << endl;
	}
}


int Hand::getBlackjackSum() {
	int totalSum = 0;

	for(Card* card : this->cards) {
		totalSum += card->getBlackjackValue();
	}

	return totalSum;
}