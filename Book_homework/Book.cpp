#include "Book.h"
using namespace std;
#include <iostream>
Book::Book(const string &author, const string &name, int since, double price) : author(author),
    name(name),
    since(since),
    price(price)
{}


string Book::getAuthor() const
{
    return author;
}

void Book::setAuthor(const string &newAuthor)
{
    author = newAuthor;
}

string Book::getName() const
{
    return name;
}

void Book::setName(const string &newName)
{
    name = newName;
}

int Book::getSince() const
{
    return since;
}

void Book::setSince(int newSince)
{
    since = newSince;
}

double Book::getPrice() const
{
    return price;
}

void Book::setPrice(double newPrice)
{
    price = newPrice;
}

void Book::print(){

    cout << "The Author is:" << author << " " << "name of book is: " << name << " " << " since: " << since <<
        " price is: " << price <<"Lv"<< endl;
}
