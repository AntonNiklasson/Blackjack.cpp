#include <iostream>
#include <string>
#include "headers/Player.h"
#include "headers/Card.h"
#include "headers/Hand.h"


Player::Player(const std::string name) {
	this->name = name;
};


// Virtual
void Player::printCurrentHandSum() {
	std::cout << "Player::printCurrentHandSum not implemented yet." << std::endl;
};


// Virtual
void Player::printCurrentHand() {
	for(Card* card : this->hand->getAllCards()) {
		card->toString();
	}
};


std::string Player::toString() {
	return this->name;
}


void Player::receiveHand(Hand* h) {
	this->hand = h;
}


void Player::receiveCard(Card* c) {
	this->hand->addCard(c);
}


void Player::printHand() {
	this->hand->printAllCards();
}


Hand* Player::getHand() {
	return this->hand;
}


bool Player::hasBlackjack() {
	return this->hand->size() == 2 && this->hand->getBlackjackSum() == 21;
}