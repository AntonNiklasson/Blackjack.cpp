#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Hand.h"

class Player {
	public:
		Player(const std::string name);

		virtual void printCurrentHandSum();
		virtual void printCurrentHand();
		virtual int askForAction();
		std::string toString();
		void receiveHand(Hand* h);
		void receiveCard(Card* c);
		void printHand();
		Hand* getHand();
		bool hasBlackjack();

	protected:
		std::string name;
		Hand* hand;
};

#endif