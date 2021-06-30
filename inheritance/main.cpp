#include <iostream>
#include "Doctor.h"
using namespace std;

int main()
{
    Doctor d1;
    d1.displayData();
    d1.setCategory("Dentist");
    cout << d1.getCategory() << endl;
    return 0;
}
