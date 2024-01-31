#ifndef BOOK_H
#define BOOK_H
using namespace std;
#include<iostream>

class Book
{
public:
    Book(const string &author, const string &title, const string &isbn);


    string getAuthor() const;
    void setAuthor(const string &newAuthor);

    string getTitle() const;
    void setTitle(const string &newTitle);

    string getIsbn() const;
    void setIsbn(const string &newIsbn);

    void display();
    friend void borrowBook(Book* book);

private:

    string author;
    string title;
    string isbn;
};

#endif // BOOK_H
