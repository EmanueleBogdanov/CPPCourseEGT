#ifndef PLAYINGCARD_H
#define PLAYINGCARD_H
using namespace std;

#include <string>

class PlayingCard {
public:
    PlayingCard(char t, std::string s);
    char getType() const;
    std::string getSuit() const;
private:
    char type;
    string suit;
};

#endif // PLAYINGCARD_H
