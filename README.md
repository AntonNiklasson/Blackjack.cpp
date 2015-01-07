# Blackjack.cpp

A simple Blackjack implementation in C++11. Mostly for learning the language, not so much for getting the actual gameplay perfect.

## Comments on Design and Structure

- The `TurnHandler` class is a `friend` of the `Blackjack` class.
- All single parameter constructors are declared as `explicit`, unless `implicit` is really needed.
- All implementation, no matter the size, is not placed in the .h files.