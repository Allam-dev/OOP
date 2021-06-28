#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle
{
    public:
        Rectangle();
        Rectangle(float l, float w);
        void printData();
        Rectangle operator +(Rectangle r){
            float l = length + r.length;
            float w = widgh + r.widgh;
            return Rectangle(l, w);
        }
        Rectangle operator -(Rectangle r){
            float l = length - r.length;
            float w = widgh - r.widgh;
            return Rectangle(l, w);
        }
        virtual ~Rectangle();

    protected:

    private:
    float length;
    float widgh;
};

#endif // RECTANGLE_H
