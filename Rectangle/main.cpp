


#include "Rectangle.h"
#include <iostream>

int main() {
    Rectangle myRectangle;

    // Set coordinates
    myRectangle.setCoordinates(5, 5, 5, 5, 5, 5, 5, 5);

    // Display properties
    std::cout << "Length: " << myRectangle.calculateLength() << std::endl;
    std::cout << "Width: " << myRectangle.calculateWidth() << std::endl;
    std::cout << "Perimeter: " << myRectangle.calculatePerimeter() << std::endl;
    std::cout << "Area: " << myRectangle.calculateArea() << std::endl;
    std::cout << "Is square? " << (myRectangle.isSquare() ? "Yes" : "No") << std::endl;

    return 0;
}
