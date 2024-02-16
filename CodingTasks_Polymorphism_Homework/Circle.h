#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle : public Shape
{
public:
    Circle(const string color,double radius);

    void draw()override;
    double area()override;
    
private:
    double radius;
};

#endif // CIRCLE_H
