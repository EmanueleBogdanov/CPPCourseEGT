#include "Rectangle.h"
#include "Shape.h"
Rectangle::Rectangle(const string color,double width, double height) : width(width), height(height), Shape(color) {}

void Rectangle::draw()    {
    cout << "Drawing a:" << color << " " << "rectangle" << endl;
}

double Rectangle::area(){
    return width * height;
}
