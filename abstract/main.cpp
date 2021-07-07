#include <iostream>

using namespace std;

class Animal{
    private:
        string name;

    public:
        Animal(string name):name(name){}
        //virtual function
        //virtual void sound(){}

        //pure virtual function
        //when you use virtual that main this class is abstract
        virtual void sound() = 0;
};

class Dog : public Animal{
    public:
        Dog(string name):Animal(name){}
        void sound(){
            cout << "ho ho ho\n";
        }
};

class Cat : public Animal{
    public:
        Cat(string name):Animal(name){}
        void sound(){
            cout << "meo meo meo\n";
        }
};

int main()
{

    Animal* animalPointer;
    Dog dog("pop");
    Cat cat("kitty");

    animalPointer = &dog;
    animalPointer->sound();

    animalPointer = &cat;
    animalPointer->sound();

    return 0;
}
