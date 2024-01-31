#include "Member.h"
#include "Book.h"

Member::Member(const string &name, int age, const string &member_Id) : name(name),
    age(age),
    member_Id(member_Id)
{}

string Member::getName() const{
    return name;
}

void Member::setName(const string &newName){
    name = newName;
}

int Member::getAge() const{
    return age;
}

void Member::setAge(int newAge){
    age = newAge;
}

string Member::getMember_Id() const{
    return member_Id;
}

void Member::setMember_Id(const string &newMember_Id){
    member_Id = newMember_Id;
}


void Member::display(){

    cout << "Name is:" << name << endl;
    cout << "Age is:" << age << endl;
    cout << "MemberID is:" << member_Id << endl;

}
void Member::borrowBook(Book* book){
    cout << name <<" Borrowed book :" << book->getTitle() << endl;


}
