#include <iostream>
using namespace std;
class Employee
{
    int employeeID;
    string name;
    float salary;
public:
    Employee()
    {
        employeeID = 0;
        name = "Unknown";
        salary = 0;
    }
    Employee(int id, string n, float s)
    {
        employeeID = id;
        name = n;
        salary = s;
    }
    Employee(Employee &e)
    {
        employeeID = e.employeeID;
        name = e.name;
        salary = e.salary;
    }

    void display()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Employee e1;
    cout << "Default Constructor:" << endl;
    e1.display();
    Employee e2(105, "Nikhil", 10000);
    cout << "\nParameterized Constructor:" << endl;
    e2.display();
    Employee e3(e2);
    cout << "\nCopy Constructor:" << endl;
    e3.display();
    return 0;
}