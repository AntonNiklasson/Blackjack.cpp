#ifndef HAND_H
#define HAND_H

#include <iostream>
#include <vector>
#include "Card.h"

using namespace std;

class Hand {
	public:
		void operator += (Card* card);

		Hand();
		Hand(Card* c1, Card* c2);

		std::vector<Card*>	getAllCards();
		void 				printAllCards();
		int					getBlackjackSum();
		int					size();

	private:
		std::vector<Card*> cards;
};

#endif