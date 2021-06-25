#ifndef DOG_H
#define DOG_H
#include <string>
using namespace std;
class Dog
{
    public:
        Dog();
        Dog(string n, string c);
        void setName(string n);
        void setColor(string c);
        string getName();
        string getColor();
        virtual ~Dog();

    protected:

    private:
        string name;
        string color;
};

#endif // DOG_H
