#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
using namespace std;

class Human
{
    public:
        Human();
        Human(string n, string m, int g);
        void setName(string n);
        void setEmail(string m);
        void setAge(int g);
        void displayData();
        virtual ~Human();

    protected:

    private:
    string name;
    string email;
    int age;
};

#endif // HUMAN_H
