#ifndef BOOK_H
#define BOOK_H
using namespace std;
#include <iostream>

class Book
{
public:
    Book(const string &title, const string &author, int pages);

    void display();
    void setTitle(const string &newTitle);

    string getAuthor() const;
    void setAuthor(const string &newAuthor);

    int getPages() const;
    void setPages(int newPages);

private:
    string title;
    string author;
    int pages;

};

#endif // BOOK_H
