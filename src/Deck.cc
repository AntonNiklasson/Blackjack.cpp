#include <iostream>
#include <string>
#include <vector>
#include "headers/Deck.h"
#include "headers/Card.h"


Deck::Deck() {
	for(int i = 0; i < 52; i++) {
		std::string color = "";
		int value = i % 13 + 2;

		if(i < 13) {
			color = "Hearts";
		} else if(i < 24) {
			color = "Diamonds";
		} else if(i < 38) {
			color = "Spades";
		} else if(i < 52) {
			color = "Clubs";
		}

		Card* card = new Card(color, value);
		cards.push_back(card);
	}
}

Card* Deck::getRandomCard() {
	srand(time(0));
	int index = rand() % cards.size();
	Card* card = cards[index];
	cards.erase(cards.begin() + index);

	return card;
}