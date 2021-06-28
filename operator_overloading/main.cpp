#include <iostream>
#include "Counter.h"
#include "Rectangle.h"
using namespace std;

int main()
{
    cout << "-----------------------------unary operator---------------------------" << endl;
    Counter c1(5);
    Counter c2 = c1--;
    cout << c2.getCounter() << "\n";
    Counter c3(80);
    Counter c4 = ++c3;
    cout << c4.getCounter() << endl;
    cout << "--------------------------------binary operator-----------------------------" << endl;
    Rectangle r1(9,4);
    Rectangle r2(7, 3);
    Rectangle r3 = r1 - r2;
    r3.printData();
    return 0;
}
