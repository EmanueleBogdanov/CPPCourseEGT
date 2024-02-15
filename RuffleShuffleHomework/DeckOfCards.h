
#include "PlayingCard.h"

class DeckOfCards {
public:
    DeckOfCards();
    void raffleShuffle();
    PlayingCard dealCard();
    ~DeckOfCards();
private:
    static const int numCards = 52;
    PlayingCard cards[numCards];
    int currentCardIndex;
};
