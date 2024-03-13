#ifndef SHAPE_H
#define SHAPE_H
using namespace std;
#include <iostream>

class Shape
{
public:
    Shape();
    Shape(const string color);
   virtual void draw() = 0;
    string getColor() const;

    void setColor(const string &newColor);

protected:
    string color;
};

#endif // SHAPE_H