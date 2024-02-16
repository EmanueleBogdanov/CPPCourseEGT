#include <iostream>
#include "Rectangle.h"
#include "Shape.h"
#include "Circle.h"
using namespace std;
void printArea(Shape* shape) {
    cout << "Area is:" << shape->area() << endl;
}

int main() {
    Circle c1("red", 2.4);
    Rectangle r1("red", 7.6, 8.3);

    c1.draw();
    r1.draw();

    printArea(&c1);
    printArea(&r1);



    return 0;
}
