#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
class Rectangle : public Shape
{
public:
    Rectangle(const string color);
    void draw() override;
};

#endif // RECTANGLE_H
