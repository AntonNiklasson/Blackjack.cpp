#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
	public:
		Card(const std::string color, int value);

		std::string getColorString();
		int 		getValue();
		int 		getBlackjackValue();
		std::string toString();
		bool 		isAce();

	private:
		std::string 	color;
		int 			value;
		std::string 	valueToString();
};

#endif