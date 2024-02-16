#include <iostream>
#include "Rectangle.h"
#include "Shape.h"
#include "Circle.h"
using namespace std;

int main() {
    Circle c1("red", 5.0);
    Rectangle r1("yellow", 4.0, 6.0);

    c1.draw();
    r1.draw();

    c1.printArea();
    r1.printArea();


    return 0;
}
