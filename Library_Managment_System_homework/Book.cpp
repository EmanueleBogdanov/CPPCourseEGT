#include "Book.h"


Book::Book(const string &author, const string &title, const string &isbn) :
    author(author),
    title(title),
    isbn(isbn)
{}

string Book::getAuthor() const{
    return author;
}

void Book::setAuthor(const string &newAuthor){
    author = newAuthor;
}

string Book::getTitle() const{
    return title;
}

void Book::setTitle(const string &newTitle){
    title = newTitle;
}

string Book::getIsbn() const{
    return isbn;
}

void Book::setIsbn(const string &newIsbn){
    isbn = newIsbn;
}



void Book::display(){


    cout << "Author is: " << author << endl;
    cout << "Title is: " << title << endl;
    cout << "ISBN is: " << isbn << endl;

}
