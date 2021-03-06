#include <vector>
#include "headers/Hand.h"
#include "headers/Card.h"


// Overloading `+=` operator
void Hand::operator += (Card* card) {
	this->cards.push_back(card);
}


Hand::Hand(Card* first, Card* second) {
	*(this) += first;
	*(this) += second;
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


int Hand::size() {
	return this->cards.size();
}