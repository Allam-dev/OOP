#include <iostream>

using namespace std;

int main()
{
    int i = 16;
    // use "*" to make variabel pointer and use "&" to get addresss of variable
    int* pointer = &i;
    cout << i << endl;
    // you can update value of varible by pointer
    *pointer = 200;
    cout << i << endl;
    return 0;
}
