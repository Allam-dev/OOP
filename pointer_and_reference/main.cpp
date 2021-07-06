#include <iostream>

using namespace std;

void swapByReference(string& text1, string& text2);
void swapByPointer(string* text1, string* text2);

int main()
{
    string textOne = "abdo";
    string textTwo = "allam";

    cout << "text one : " << textOne << endl;
    cout << "text two : " << textTwo << endl;


    //swap by reference
    cout << "--------------------------- swap by reference ---------------------------\n";
    swapByReference(textOne, textTwo);
    cout << "text one : " << textOne << endl;
    cout << "text two : " << textTwo << endl;

    //swap by pointer
    cout << "--------------------------- swap by pointer ---------------------------\n";
    swapByPointer(&textOne, &textTwo);
    cout << "text one : " << textOne << endl;
    cout << "text two : " << textTwo << endl;

    return 0;
}

void swapByReference(string& text1, string& text2){
    string temp = text1;
    text1 = text2;
    text2 = temp;
}

void swapByPointer(string* text1, string* text2){
    string temp = *text1;
    *text1 = *text2;
    *text2 = temp;
}

