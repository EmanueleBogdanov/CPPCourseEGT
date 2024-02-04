

#include "Rectangle.h"
#include <iostream>
#include <cmath>

Rectangle::Rectangle() {
    // Default constructor
}

void Rectangle::setCoordinates(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
    // Verify coordinates are in the first quadrant and within the specified range
    if (x1 >= 0 && x1 <= 20.0 && y1 >= 0 && y1 <= 20.0 &&
        x2 >= 0 && x2 <= 20.0 && y2 >= 0 && y2 <= 20.0 &&
        x3 >= 0 && x3 <= 20.0 && y3 >= 0 && y3 <= 20.0 &&
        x4 >= 0 && x4 <= 20.0 && y4 >= 0 && y4 <= 20.0) {

        // Verify that the coordinates form a rectangle
        if ((x1 == x2 && y1 == y4 && x3 == x4 && y2 == y3) || (x1 == x4 && y1 == y2 && x2 == x3 && y3 == y4)) {
            this->x1 = x1;
            this->y1 = y1;
            this->x2 = x2;
            this->y2 = y2;
            this->x3 = x3;
            this->y3 = y3;
            this->x4 = x4;
            this->y4 = y4;
        } else {
            std::cerr << "Invalid coordinates! They do not form a rectangle.\n";
        }
    } else {
        std::cerr << "Invalid coordinates! Coordinates must be in the first quadrant and within the range [0, 20.0].\n";
    }
}

double Rectangle::calculateLength() const {  //functions
    return std::max(std::abs(x2 - x1), std::abs(x3 - x4));
    // return second - first second = >
}

double Rectangle::calculateWidth() const {
    return std::max(std::abs(y2 - y1), std::abs(y3 - y4));
}

double Rectangle::calculatePerimeter() const {
    return 2 * (calculateLength() + calculateWidth());
}

double Rectangle::calculateArea() const {
    return calculateLength() * calculateWidth();
}

bool Rectangle::isSquare() const {
    return calculateLength() == calculateWidth();
}
