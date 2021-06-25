#include "Calculator.h"
#include <string>
using namespace std;
Calculator::Calculator()
{
    //ctor
}

Calculator::~Calculator()
{
    //dtor
}

int Calculator::sum(int numberOne, int numberTwo){
    return numberOne + numberTwo;
}

int Calculator::sum(int numberOne, int numberTwo, int numberThree){
    return numberOne + numberTwo + numberThree;
}

string Calculator::sum(string textOne, string text2){
    return textOne + text2;
}

char Calculator::sum(char char1, char char2){
    return char1 + char2;
}
