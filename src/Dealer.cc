#include "headers/Dealer.h"
#include "headers/Card.h"
#include "headers/Deck.h"


Card* Dealer::dealCard() {
	return this->deck.getRandomCard();
}