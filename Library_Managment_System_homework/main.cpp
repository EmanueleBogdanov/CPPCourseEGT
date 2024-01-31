#include <iostream>
#include "Book.h"
#include "Member.h"
using namespace std;

int main()
{
    Book books[2] = {
        Book("J. K. Rowling", "Harry Potter", "ISBN-97238-123231-432"),

        Book("Mario Puzo", "The Godfather", "ISBN-2213-433-3223")
    };

    // array of Member objects
    Member members[2] = {
        Member("Emanuele", 18, "23"),
        Member("Pesho", 26, "45")
    };


    cout << "\n**************************************************************************\n";
    cout << "                          LIBRARY MANAGEMENT SYSTEM                         \n";
    cout << "\n**************************************************************************\n\n";

    // borrowing process
    members[0].borrowBook(&books[0]);
    cout << endl;
    members[1].borrowBook(&books[1]);
    cout << endl;
    for(int i = 0; i < 2; i++){
        members[i].display();
    }
    cout << endl;
    for (int i = 0; i < 2; ++i) {
        books[i].display();
    }


    return 0;
}
