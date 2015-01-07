#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "TurnHandler.h"
#include "Dealer.h"
#include "Player.h"

class Blackjack {
	friend class TurnHandler;

	public:
		Blackjack();

		void addPlayer(Player* p);
		void playRound();
		void dealCardsToAll();

	private:
		Dealer dealer;
		std::vector<Player*> players;
		TurnHandler* turnHandler = new TurnHandler(this);
};

#endif
