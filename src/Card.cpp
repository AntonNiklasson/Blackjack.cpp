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

	return "unknown color";
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
	return this->valueToString() + this->getColorString();
}


bool Card::isAce() {
	return getValue() == 14;
}


std::string Card::valueToString() {
	if(value < 11) {
		return std::to_string(value);
	} else {
		switch(value) {
			case 11: return "J";
			case 12: return "Q";
			case 13: return "K";
			case 14: return "A";
		}
	}
	return "0";
}