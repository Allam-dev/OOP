#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    Calculator calc = Calculator();
    cout << calc.sum('d', 'p') << endl;
    return 0;
}
