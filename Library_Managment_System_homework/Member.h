#ifndef MEMBER_H
#define MEMBER_H
#include "Book.h"
using namespace std;

class Member
{
public:
    Member(const string &name, int age, const string &member_Id);


    string getName() const;
    void setName(const string &newName);

    int getAge() const;
    void setAge(int newAge);

    string getMember_Id() const;
    void setMember_Id(const string &newMember_Id);

    void display();
    void borrowBook(Book* book);
private:
    string name;
    int age;
    string member_Id;

};

#endif // MEMBER_H
