#ifndef BOX_H
#define BOX_H


class Box
{
public:
    Box(int width, int length, int height);
    friend Box operator+(Box, Box);


    int getWidth() const;
    void setWidth(int newWidth);

    int getLength() const;
    void setLength(int newLength);

    int getHeight() const;
    void setHeight(int newHeight);

    void print();

private:
    int width;
    int length;
    int height;
};

#endif // BOX_H
