#include "Shape.h"

Shape::Shape(const string  color) : color(color)
{}


string Shape::getColor() const
{
    return color;
}

void Shape::setColor(const string &newColor)
{
    color = newColor;
}
