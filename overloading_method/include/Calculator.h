#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <string>
using namespace std;

class Calculator
{
    public:
        int sum(int numberOne, int numberTwo);
        int sum(int numberOne, int numberTwo, int numberThree);
        string sum(string textOne, string textTwo);
        char sum(char charOne, char charTwo);
        Calculator();
        virtual ~Calculator();

    protected:

    private:
};

#endif // CALCULATOR_H
