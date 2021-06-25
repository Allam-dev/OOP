#include "Calculator.h"
#include <iostream>
using namespace std;

Calculator::Calculator()
{
    //ctor
}

Calculator::~Calculator()
{
    //dtor
}

int Calculator::sum(int n1, int n2){
    cout << "result of sum : " << n1 + n2 << endl;
    return n1 + n2;
}

int Calculator::multiplication(int n1, int n2){
    cout << "result of multiplication : " << n1 * n2 << endl;
    return n1 * n2;
}
