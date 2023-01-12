#include <iostream>
using namespace std;

class Employee
{
    int empID;
    string empName;

public:
    void setData(void)
    {
        cout << "Enter the name of the employee: " << endl;
        cin >> empName;
        cout << "Enter the ID of the employee: " << endl;
        cin >> empID;
    }
    void printData(void);
};

void Employee::printData(void)
{
    cout << "The employee name: " << empName << " has an ID of: " << empID << endl;
}

int main()
{
    Employee farmer[3];
    for (int i = 0; i < 3; i++)
    {
        farmer[i].setData();
    }

    for (int i = 0; i < 3; i++)
    {
        farmer[i].printData();
    }

    return 0;
}