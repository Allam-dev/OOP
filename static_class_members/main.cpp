#include <iostream>
#include "Player.h"
#include "Calculator.h"
using namespace std;

int main()
{
    /*
    Player p1;
    cout << p1.getNumber() << endl;

    Player p2;
    cout << p2.getNumber() << endl;

    Player p3;
    cout << p3.getNumber() << endl;
    */

    Calculator::sum(1, 2);
    Calculator::multiplication(2, 3);

    return 0;
}
