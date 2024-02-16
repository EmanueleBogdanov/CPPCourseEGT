#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle : public Shape
{
public:
    Circle(const string color);

    void draw()override;



};

#endif // CIRCLE_H
