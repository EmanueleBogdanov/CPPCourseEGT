#include "Rectangle.h"
#include "Shape.h"
Rectangle::Rectangle(const string color) : Shape(color) {}

void Rectangle::draw()    {
    cout << "Drawing a:" << color << " " << "rectangle" << endl;
}
