#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {

public:
    Rectangle();  // Default constructor
    void setCoordinates(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
    double calculateLength() const ;
    double calculateWidth() const ;
    double calculatePerimeter() const;
    double calculateArea() const;
    bool isSquare() const;
private:
    double x1, y1, x2, y2, x3, y3, x4, y4;

};

#endif // RECTANGLE_H


