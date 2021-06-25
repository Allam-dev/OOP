#include "Cat.h"
#include <string>
#include <iostream>
using namespace std;

Cat::Cat():name("quen"), age(1)
{
    cout << "constructr one" << endl;
}

Cat::Cat(string n, int g): name(n), age(g)
{
    cout << "constructr two" << endl;
}


Cat::~Cat()
{
    //dtor
}

int Cat::getAge(){
            return age;
        }
string Cat::getName(){
            return name;
        }
