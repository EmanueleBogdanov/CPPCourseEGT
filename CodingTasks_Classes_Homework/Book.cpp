#include "Book.h"


Book::Book(const string &title, const string &author, int pages) : title(title),
    author(author),
    pages(pages)
{}


void Book::setTitle(const string &newTitle)
{
    title = newTitle;
}

string Book::getAuthor() const
{
    return author;
}

void Book::setAuthor(const string &newAuthor)
{
    author = newAuthor;
}

int Book::getPages() const
{
    return pages;
}

void Book::setPages(int newPages)
{
    pages = newPages;
}

void Book::display() {
    cout << "Title is : " << " " << title << " " << "Author is : " << author << " " << " Pages are :"
         << pages << endl;
}
