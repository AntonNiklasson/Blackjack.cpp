#ifndef HAND_H
#define HAND_H

#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;

class Hand {
	public:
		Hand();
		Hand(Card* c1, Card* c2);
		void addCard(Card* c);
		std::vector<Card*> getAllCards();
		void printAllCards();
		int getBlackjackSum();

	private:
		std::vector<Card*> cards;
};

#endif