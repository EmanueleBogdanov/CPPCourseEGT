#include "Box.h"
using namespace std;
#include <iostream>


// -Да се реализира клас Box (кутия) с 3 полета за ширина, дължина и височина,
//конструктор и сет/гет методи. Да се предефинират оператори които биха позволили следния запис да работи:
// box3 = box1 + box2;
// където box1, box2, box3 са обекти от Box. Box3 се получава когато сложим двете кутии една над друга.

Box::Box(int width, int length, int height) :
    width(width),
    length(length),
    height(height)
{}

Box operator+(Box box1, Box box2){
    int height = box1.height + box2.height;
    return Box(box1.width, box1.length, height );
};


int Box::getWidth() const{
    return width;
}

void Box::setWidth(int newWidth){
    while (width <= 0) {
    cout << "Enter number" << endl;
    cin>> width;
    }

    width = newWidth;
}

int Box::getLength() const{
    return length;
}

void Box::setLength(int newLength){
    while (length <= 0) {
        cout << "Enter number" << endl;
        cin>> length;
    }
    length = newLength;
}

int Box::getHeight() const{
    return height;
}

void Box::setHeight(int newHeight){
    while (height <= 0) {
        cout << "Enter number" << endl;
        cin>> height;
    }
    height = newHeight;
}

void Box::print(){
    cout<< "Width is:" << width << "Length is: " << length << " Height is: " << height << endl;
}

