#include "Car.h"
#include <iostream>
Car::Car(string mkr, string clr, int mdl) : maker(mkr), color(clr), model(mdl)
{
    cout << "hello" << endl;
}

Car::~Car()
{
    cout << "bay bay"<<"\n";
}

string Car::getColor(){
    return color;
}

string Car::getMaker(){
    return maker;
}

int Car::getModel(){
    return model;
}
