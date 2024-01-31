#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;
//         Да се направи клас Книга, който съдържа информация за автор, име, година на издаване и цена.

//                 Да има гетери и сетери и да се раздели на файлове както на лекцията.

//                         В мейн файла да има вектор от книги. Трябва да съдържа поне 4 книги.

//         Да се изведе информация коя е най-евтината или най-скъпата книг*/а.
class Book
{
public:
    Book(const string &author, const string &name, int since, double price);
    string getAuthor() const;
    void setAuthor(const string &newAuthor);

    string getName() const;
    void setName(const string &newName);

    int getSince() const;
    void setSince(int newSince);

    double getPrice() const;
    void setPrice(double newPrice);

    void print();

    void mostCheapestBook();
private:
    string author;
    string name;
    int since;
    double price;
};

#endif // BOOK_H
