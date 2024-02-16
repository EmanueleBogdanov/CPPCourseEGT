#include "Circle.h"
#include "Shape.h"
Circle::Circle(const string color) : Shape(color) {}

void Circle::draw()   {
    cout << "Drawing a:" << color << " " << "circle" << endl;
}
