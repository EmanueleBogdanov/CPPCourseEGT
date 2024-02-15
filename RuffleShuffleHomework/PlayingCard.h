
using namespace std;

#include <string>

class PlayingCard {
public:
    PlayingCard();
    PlayingCard(char t, string s);
    char getType() const;
    string getSuit() const;
private:
    char type;
    string suit;
};

