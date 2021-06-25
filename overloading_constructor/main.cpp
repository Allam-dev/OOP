#include <iostream>
#include <string>
#include "Cat.h"
using namespace std;

int main()
{
    Cat cat1;
    cout << "Name : " << cat1.getName() << endl << "Age : " << cat1.getAge() << endl;
    Cat cat2("bob", 5);
    cout << "Name : " << cat2.getName() << endl << "Age : " << cat2.getAge() << endl;
    return 0;
}
