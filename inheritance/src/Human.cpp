#include "Human.h"

Human::Human()
{
    name = "unknow";
    email = "unknow@unknow.com";
    age = 0;
}

Human::~Human()
{
    //dtor
}

Human::Human(string n, string m, int g):name(n), email(m), age(g){}

void Human::setName(string n){
    name = n;
}

void Human::setEmail(string m){
  email = m;
}

void Human::setAge(int g){
  age = g;
}

void Human::displayData(){
   cout << name << " " << email << " " << age << endl;
}
