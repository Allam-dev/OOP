#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
    Car car1("honday", "black", 2022);
    cout << "Color" << car1.getColor() << endl;
    cout << "Maker" << car1.getMaker() << "\n";
    cout << "Model" << car1.getModel() << endl;
    return 0;
}
