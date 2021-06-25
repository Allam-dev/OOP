#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(int l, int w):length(l),widgh(w)
{
    //ctor
}

Rectangle::Rectangle()
{
    //ctor
}

Rectangle::~Rectangle()
{
    //dtor
}

void Rectangle::print(){
    cout << length << "\t" << widgh << endl;
}

Rectangle Rectangle::addRectangle(Rectangle r){
    Rectangle result;
    result.length = length + r.length;
    result.widgh = widgh + r.widgh;
    return result;
}
