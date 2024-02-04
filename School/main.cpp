#include <iostream>
#include <vector>
using namespace std;

class Students {
public:
    Students(const string& name, int id) : name(name), id(id) {}
    string getName() const { return name; }
    int getId() const { return id; }
    void print() const { cout << "Student is " << name << " with ID: " << id << endl; }
private:
    string name;
    int id;
};

class Discipline {
public:
    Discipline(const string& name, int numOfLec, int numOfEx) : name(name), numOfLec(numOfLec), numOfEx(numOfEx) {}
    string getName() const { return name; }
    int getNumOfLec() const { return numOfLec; }
    int getNumOfEx() const { return numOfEx; }
    void print() const { cout << "Discipline is: " << name << " Lectures " << numOfLec << " Exercises " << numOfEx << endl; }
private:
    string name;
    int numOfLec;
    int numOfEx;
};

class Teachers {
public:
    Teachers(const string& name, const string& title, const vector<Discipline>& disciple) : name(name), title(title), discipline(disciple) {}
    const vector<Discipline>& getDiscipline() const { return discipline; }
    string getName() const { return name; }
    string getTitle() const { return title; }
private:
    string name;
    string title;
    vector<Discipline> discipline;
};

class Class {
public:
    Class(const string& id, const vector<Teachers>& teachers, const vector<Students>& students) : id(id), teachers(teachers), students(students) {}
    string getId() const { return id; }
    const vector<Teachers>& getTeachers() const { return teachers; }
    const vector<Students>& getStudents() const { return students; }
private:
    string id;
    vector<Teachers> teachers;
    vector<Students> students;
};

class School {
public:
    void addClass(const Class& schoolClass) { classes.push_back(schoolClass); }
    void printInfo() {
        cout << "\n**************************************************************************\n";
        cout << "                          INSTITUTE OF TECHNOLOGY                        \n";
        cout << "\n**************************************************************************\n\n";
        for (auto& schoolClass : classes) {
            cout << "Class is: " << schoolClass.getId() << endl;
            for (auto& teacher : schoolClass.getTeachers()) {
                cout << "Teacher is: " << teacher.getName() << " Title is: " << teacher.getTitle() << endl;
                for (auto& discipline : teacher.getDiscipline()) {
                    discipline.print();
                }
            }
            for (auto& student : schoolClass.getStudents()) {
                student.print();
            }
        }
    }
private:
    vector<Class> classes;
};

int main() {
    School school;

    Discipline math("History", 10, 12);
    Discipline psychology("Psychology", 23, 256);
    Discipline chemistry("Chemistry", 86, 21);

    Teachers ajj("Ahinora", "Professor", {math});
    Teachers ajj1("Emanuele", "Sr.Analyst", {psychology});
    Teachers ajj2("Ahinora", "Coach", {chemistry});

    Students student1("Moni", 2);
    Students student2("Ivan", 7);
    Students student3("Dragan", 16);

    Class clas1("Class A", {ajj}, {student1, student2});
    Class clas2("Class B", {ajj1, ajj2}, {student3});

    school.addClass(clas1);
    school.addClass(clas2);

    school.printInfo();

    return 0;
}
