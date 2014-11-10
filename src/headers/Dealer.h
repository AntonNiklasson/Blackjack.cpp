#ifndef DEALER_H
#define DEALER_H

#include "Deck.h"
#include "Card.h"
#include "Hand.h"

class Dealer {
	public:
		Card* dealCard();
		void receiveHand(Hand* h) {
			this->hand = h;
		}

	private:
		Deck deck;
		Hand* hand;
};

#endif