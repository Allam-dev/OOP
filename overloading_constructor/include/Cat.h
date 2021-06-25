#ifndef CAT_H
#define CAT_H
#include <string>
using namespace std;


class Cat
{
    public:
        string getName();
        int getAge();
        Cat();
        Cat(string n, int g);
        virtual ~Cat();

    protected:

    private:
        string name;
        int age;
};

#endif // CAT_H
