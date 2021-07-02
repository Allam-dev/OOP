#include <iostream>

using namespace std;

class Student{
    private:
        string name;
        int age;
        string favoriteSubject;

    public:
        Student(string name, int age, string favoriteSubject):name(name), age(age), favoriteSubject(favoriteSubject){}
        void display(){
            cout << "name : " << name << "\n" << "age : " << age << "\n" << "favorite subject : " << favoriteSubject << endl;
        }
        void setName(string name){
            this->name = name;
        }
        void setFavoriteSubject(string favoriteSubject){
            this->favoriteSubject = favoriteSubject;
        }
        void setAge(int age){
            this->age = age;
        }
        string getName(){
            return name;
        }
        string getFavoriteSubject(){
            return favoriteSubject;
        }
        int getAge(){
            return age;
        }

};

class Developer{

    private:
        string name;
        string specialty;

    public:
        Developer(string specialty, string name):specialty(specialty), name(name){}
        void setSpecialty(string specialty){
            this->specialty = specialty;
        }
        string getSpecialty(){
            return specialty;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
        void display(){
            cout << "specialty : " << specialty << "\n" << "name : " << name << endl;
        }
};

class Abdo : public Student, public Developer{
    public:
       Abdo(string name, int age, string favoriteSubject, string specialty):Student(name, age, favoriteSubject), Developer(specialty,name){}
       void display(){
            Student::display();
            Developer::display();
        }
};

int main()
{
    Abdo a("allam", 17, "math", "flutter developer");
    a.Developer::setName("abdelrhman");
    a.display();
    return 0;
}
