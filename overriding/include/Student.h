#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>

using namespace std;


class Student : public Person
{
    public:
        Student(string n, string e, int a, string c);
        void display();
        virtual ~Student();

    protected:

    private:
    string course;
};

#endif // STUDENT_H
