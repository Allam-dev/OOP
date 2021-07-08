#include <iostream>

using namespace std;

int main()
{
    int number1, number2;
    number1 = number2 = 0;

    try{

        cin >> number1;
        cin >> number2;

        if(number1 < 5)
            throw 404;

        if(number2 == 0)
            throw "number 2 can't be 0";

        cout << number1 / number2 << endl;

    }catch(const char* msg){
        cout << msg << endl;
    }
    catch(int error){
        cout << error << endl;
    }
    // general catch
    //catch(...){
    //    cout << "error error error error error error error error\n";
    //}
    return 0;
}
