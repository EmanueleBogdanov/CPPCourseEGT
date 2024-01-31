#include <iostream>
#include "Book.h"
#include <vector>
using namespace std;


void library(vector<Book>& Books){

    for(int i =0; i< Books.size(); i++){
        Books[i].print();
    }
};

void mostCheapestBook(vector<Book>& Books) {
    double mostCheapestBook = Books.at(0).getPrice();
    size_t idx = 0;

    for (size_t i = 1; i < Books.size(); ++i) {
        if (Books.at(i).getPrice() < mostCheapestBook) {
            mostCheapestBook = Books.at(i).getPrice();
            idx = i;
        }
    }

    cout << "Most cheapest book is: ";
    Books[idx].print();
    cout << endl;
}



  int main()
{
    vector<Book> Books;

    Book a("J.K. Rowling", "Harry Potter",1997,23.40);
    Book b("Suzanne Collins", "The Hunger Games",2008,18.50);
    Book c("Astrid Lindgren", "Pippi Longstocking",1945,10.50);
    Book d("Rick Riordan", "The Lightning Thief",2005,12.50);



    //vector<Book> Books;
    Books.push_back(a);
    Books.push_back(b);
    Books.push_back(c);
    library(Books);
    mostCheapestBook(Books);

    return 0;
}
