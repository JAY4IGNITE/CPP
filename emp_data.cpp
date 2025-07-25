#include <iostream>
using namespace std;
class Employee
{
private:
    double salary;
    int empID;

public:
    string name;
    string department;
    Employee(string n, string d, int id, double s)
    {
        name = n;
        department = d;
        empID = id;
        salary = s;
    }
    void setSalary(double s)
    {
        if (s >= 0)
            salary = s;
    }
    double getSalary()
    {
        return salary;
    }
    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Salary: ₹" << salary << endl;
    }
};
int main()
{
    Employee e1("JAYA SAI", "SW", 101, 40000.0);
    e1.displayDetails();
    e1.setSalary(45000.0);
    cout << "\nAfter Salary Update:\n";
    e1.displayDetails();
    return 0;
}
