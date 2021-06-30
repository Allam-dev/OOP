#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string n, string e, int a):name(n), email(e), age(a)
{
    //ctor
}

Person::~Person()
{
    //dtor
}

void Person::display(){
    cout << "name : " << name << " --- " << "emai : " << email << " --- " << "age : " << age << endl;
}
