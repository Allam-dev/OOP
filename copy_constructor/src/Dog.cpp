#include "Dog.h"
using namespace std;

Dog::Dog():name("pop"), color("white")
{
    //ctor
}

Dog::Dog(string n, string c):name(n), color(c)
{}

Dog::~Dog()
{
    //dtor
}

void Dog::setName(string n){
    name = n;
}

void Dog::setColor(string c){
    color = c;
}

string Dog::getName(){
    return name;
}

string Dog::getColor(){
    return color;
}
