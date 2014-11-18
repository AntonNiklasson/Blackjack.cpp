#include <string>
#include <vector>
#include "headers/Card.h"


Card::Card(std::string color, int value) {
	this->color = color;
	this->value = value;
}


std::string Card::getColorString() {
	if(color == "Hearts") {
		return "♥";
	} else if(color == "Diamonds") {
		return "♦";
	} else if(color == "Clubs") {
		return "♣";
	} else if(color == "Spades") {
		return "♠";
	}
}


int Card::getValue() {
	return value;
}


int Card::getBlackjackValue() {
	if(getValue() == 14) {
		return 11; // Ace
	} else if(getValue() >= 11 && getValue() <= 13) {
		return 10; // Jack, Queen or King
	} else {
		return getValue(); // Any other card
	}
}


std::string Card::toString() {
	// e.g. "Jack of Hearts" or "9 of Diamonds"
	return this->valueToString() + " of " + this->getColorString();
}


bool Card::isAce() {
	return getValue() == 14;
}


std::string Card::valueToString() {
	if(value < 11) {
		return std::to_string(value);
	} else {
		switch(value) {
			case 11: return "Jack";
			case 12: return "Queen";
			case 13: return "King";
			case 14: return "Ace";
		}
	}
	return "0";
}