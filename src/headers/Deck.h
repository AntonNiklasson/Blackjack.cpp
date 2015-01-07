#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"

class Deck {
	public:
		Deck();
		Card* getRandomCard();

	private:
		std::vector<Card*> cards;
};

#endif
