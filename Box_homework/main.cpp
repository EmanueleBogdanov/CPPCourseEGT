#include "Box.h"
using namespace std;

int main()
{


    Box box1(20, 30, 30);
    Box box2(20, 30, 30);
    Box box3 = box1 + box2;


    box1.print();

    box2.print();

    box3.print();

}
