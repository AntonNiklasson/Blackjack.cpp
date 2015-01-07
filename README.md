# Blackjack.cpp

A simple Blackjack implementation in C++11. Mostly for learning the language, not so much for getting the actual gameplay perfect.

## Comments on Design and Structure

- The `TurnHandler` class is a `friend` of the `Blackjack` class.
- All single parameter constructors are declared as `explicit`, unless `implicit` is really needed.
- No implementation in header files.
- The operator += is overloaded in Hand to allow for adding a card to the hand in a clean way. `hand += card`