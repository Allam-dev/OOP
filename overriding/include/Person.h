#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;

class Person
{
    public:
        Person(string n, string e, int a);
        void display();
        virtual ~Person();

    protected:

    private:
        string name;
        string email;
        int age;
};

#endif // PERSON_H
