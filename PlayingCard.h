#ifndef PLAYINGCARD_H
#define PLAYINGCARD_H
using namespace std;

#include <string>

class PlayingCard {
public:
    PlayingCard(char t, string s);
    char getType() const;
    string getSuit() const;
private:
    char type;
    string suit;
};

#endif//s
