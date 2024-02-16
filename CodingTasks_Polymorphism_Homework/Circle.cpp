#include "Circle.h"
#include "Shape.h"
#include <cmath>
Circle::Circle(const string color,double radius) : radius(radius), Shape(color) {}

void Circle::draw()   {
    cout << "Drawing a:" << color << " " << "circle" << endl;
}
double Circle::area()  {
    return M_PI * this->radius * this->radius;
}
