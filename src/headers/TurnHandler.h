#ifndef TURNHANDLER_H
#define TURNHANDLER_H

class Blackjack;

#include "Blackjack.h"
#include "Player.h"

class TurnHandler {
	public:
		TurnHandler(Blackjack* game);

		void 	handlePlayersTurn(Player* p);
		void 	printTurnHeader();
		int 	askForAction();
		void 	executeAction(int action);
		void 	finishDealersTurn();
		void 	presentTurnOutcome();

	private:
		Blackjack* game;
		Player* player;
		int nextAction;
		bool turnIsDone;
};

#endif
