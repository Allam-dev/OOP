#ifndef CAR_H
#define CAR_H
#include "string"
using namespace std;


class Car
{
    public:
        string getColor();
        string getMaker();
        int getModel();
        Car(string mkr, string clr, int mdl);
        virtual ~Car();

    protected:

    private:
        string maker;
        string color;
        int model;
};

#endif // CAR_H
