#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle():length(0), widgh(0){}

Rectangle::~Rectangle()
{
    //dtor
}

Rectangle::Rectangle(float l, float w):length(l), widgh(w){}

void Rectangle::printData(){
            cout << "length = " << length << endl;
            cout << "widgh = " << widgh << endl;
        }
