#include "PlayingCard.h"

PlayingCard::PlayingCard(char t, std::string s) : type(t), suit(s) {}

char PlayingCard::getType() const {
    return type;
}

std::string PlayingCard::getSuit() const {
    return suit;
}
