#include "PlayingCard.h"
PlayingCard::PlayingCard() : type(), suit(){}
PlayingCard::PlayingCard(char t, string s) : type(t), suit(s) {}

char PlayingCard::getType() const {
    return type;
}

string PlayingCard::getSuit() const {
    return suit;
}