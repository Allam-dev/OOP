#include "Student.h"
#include "Person.h"
#include <iostream>

using namespace std;

Student::Student(string n, string e, int a, string c):Person(n, e, a),course(c)
{
    //ctor
}

Student::~Student()
{
    //dtor
}

void Student::display(){
    Person::display();
    cout << "course : " << course << endl;
}
