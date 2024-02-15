#include "DeckOfCards.h"
#include <ctime>

DeckOfCards::DeckOfCards() {

    int index = 0;
    for (char t : {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'}) {
        for (std::string s : {"spades", "diamonds", "hearts", "clubs"}) {
            cards[index] = PlayingCard(t, s);
            ++index;
        }
    }
    currentCardIndex = 0;
}

void DeckOfCards::raffleShuffle() {
    srand(time(0));
    for (int i = 0; i < numCards; ++i) {
        int randIndex = std::rand() % numCards;
        PlayingCard temp = cards[i];
        cards[i] = cards[randIndex];
        cards[randIndex] = temp;
    }
}

PlayingCard DeckOfCards::dealCard() {
    if (currentCardIndex < numCards) {
        return cards[currentCardIndex++];
    }
    return PlayingCard('-', "empty");
}
//ss
