#include <iostream>
#include <string>
#include <vector>
#include "headers/Deck.h"
#include "headers/Card.h"

using namespace std;


Deck::Deck() {
	cout << "In Deck::Deck()!" << endl;

	for(int i = 0; i < 52; i++) {
		string color = "";
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

	cout << "Getting random card." << endl;

	srand(time(NULL));
	int index = rand() % 52;

	cout << "Is this working?" << endl;

	Card* card = cards[index];

	cout << "Yes, it is." << endl;

	cards.erase(cards.begin() + index);

	return card;
}