#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
class Rectangle : public Shape
{
public:
    Rectangle(const string color,double width, double height);
    void draw() override;
    double area()override;
    
private:
    double width;
    double height;
};

#endif // RECTANGLE_H
