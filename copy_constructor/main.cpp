#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;

int main()
{
    Dog d1;
    Dog d2("zx", "balck");
    Dog d3 = d2;
    cout << d3.getName() << endl;
    d3.setColor("orange");
    cout << d2.getColor() << endl;
    return 0;
}
