#include <iostream>

using namespace std;

const int arraySize = 5;

int main()
{
    int numbers[arraySize] = {5, 8, 6, 9, 1};

    //access array element by index
    cout << "access array element by index \n";
    for(int i = 0; i < arraySize; i++)
        cout << numbers[i] << endl;

    //access array element by pointer
    cout << "access array element by pointer \n";
    for(int i = 0; i < arraySize; i++)
        cout << *(numbers+i) << endl;
    return 0;
}
