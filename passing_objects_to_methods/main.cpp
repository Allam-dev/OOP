#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle r1(5,7);
    Rectangle r2(8,9);
    r1.print();
    r2.print();
    Rectangle r3 = r1.addRectangle(r2);
    r3.print();
    return 0;
}
