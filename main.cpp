#include <iostream>

using namespace std;
#include <iostream>
#include "DeckOfCards.h"

    int main() {

        DeckOfCards deck;

        deck.raffleShuffle();


        for (int i = 0; i < 26; ++i) {
            PlayingCard card1 = deck.dealCard();
            PlayingCard card2 = deck.dealCard();
           cout << "Card 1: " << card1.getType() << " of " << card1.getSuit() << endl;
           cout << "Card 2: " << card2.getType() << " of " << card2.getSuit() << endl;
        }

        return 0;
    }


//ss
