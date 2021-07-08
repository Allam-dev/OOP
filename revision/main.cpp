#include <iostream>

using namespace std;

class Employee{
    protected:
        string name;
        int id;
        double salary;

    public:
        Employee(string name, int id, double salary):name(name), id(id), salary(salary){}
        virtual float getTotalSalary() = 0;
        virtual void print(){
            cout << "name : " << name << "\n id : " << id << "\n salary : " << salary << endl;
        }
};

class Sales : public Employee{
    private:
        float gossSales;
        float commissionRate;
    public:
        Sales(string name, int id, double salary, float gossSales, float commissionRate):Employee(name, id, salary), gossSales(gossSales), commissionRate(commissionRate){}
        void setGossSales(float gossSales){
            this->gossSales = gossSales;
        }
        void setCommissionRate(float commissionRate){
            this->commissionRate = commissionRate;
        }
        float getTotalSalary(){
            return salary + (gossSales * commissionRate);
        }
        void print(){
            Employee::print();
            cout << "goss sales : " << gossSales << "\n commission rate : " << commissionRate << endl;
        }
};

class Engineer : public Employee{
    private:
        string specialty;
        int experience;
        int overTimeHour;
        int overTimeHourRate;

    public:
        Engineer(string name, int id, double salary, string specialty, int experience, int overTimeHour, int overTimeHourRate):Employee(name, id, salary), specialty(specialty), experience(experience), overTimeHour(overTimeHour), overTimeHourRate(overTimeHourRate){}
        void setOverTimeHour(int overTimeHour){
            this->overTimeHour = overTimeHour;
        }
        void setOverTimeHourRate(int overTimeHour){
            this->overTimeHour = overTimeHour;
        }

        float getTotalSalary(){
            return salary + (overTimeHour * overTimeHourRate);
        }
        void print(){
            Employee::print();
            cout << "specialty : " << specialty << "\n experience : " << experience << "\n overTimeHour : " << overTimeHour << "\n overTimeHourRate : " << overTimeHourRate << endl;
        }
};

int main()
{
    Employee* ptr;
    Sales s1 = Sales("pop", 5, 4500, 78, 6);
    Engineer e1 = Engineer("kali", 7, 8000, "IT", 4, 3, 100);

    ptr = &s1;
    ptr->getTotalSalary();
    ptr->print();
    cout << "---------------------------------------------------";
    ptr = &e1;
    ptr->getTotalSalary();
    ptr->print();
    return 0;
}
