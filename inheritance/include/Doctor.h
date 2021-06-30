#ifndef DOCTOR_H
#define DOCTOR_H

#include <Human.h>

#include <iostream>
using namespace std;


class Doctor : public Human
{

    public:
        void setCategory(string);
        string getCategory();

    private:
        string category;
};

#endif // DOCTOR_H
