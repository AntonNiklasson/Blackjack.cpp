#ifndef DEALER_H
#define DEALER_H

#include "Deck.h"
#include "Card.h"
#include "Hand.h"

class Dealer {
	public:
		Card* dealCard();
		void receiveHand(Hand* h);
		void receiveCard(Card* c);
		int currentBlackjackSum();

	private:
		Deck deck;
		Hand* hand;
};

#endif