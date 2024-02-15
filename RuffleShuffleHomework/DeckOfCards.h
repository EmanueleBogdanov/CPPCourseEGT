#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include "PlayingCard.h"

class DeckOfCards {
public:
    DeckOfCards();
    void raffleShuffle();
    PlayingCard dealCard();
private:
    static const int numCards = 52;
    PlayingCard cards[numCards];
    int currentCardIndex;
};

#endif // DECKOFCARDS_H
//s
//sdf