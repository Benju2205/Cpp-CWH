#include <iostream>
#include<cmath>
using namespace std;

class simpleCalculator
{
protected:
    float a, b;

public:
    void getData()
    {
        cout << "Enter first number: " << endl;
        cin >> a;
        cout << "Enter second number: " << endl;
        cin >> b;
    }
    void calculate()
    {
        int choice;
        float result;
        cout << "Select which operation to be performed:\n1.Add\n2.Subtract\n3.Divide\n4.Multiply " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            result = a + b;
            cout << "The result is: " << result << endl;
            break;
        case 2:
            result = a - b;
            cout << "The result is: " << result << endl;
            break;
        case 3:
            result = a / b;
            cout << "The result is: " << result << endl;
            break;
        case 4:
            result = a * b;
            cout << "The result is: " << result << endl;
            break;
        default:
            cout << "Invalid choice!!";
            break;
        }
    }
};

class scientificCalculator{
    protected: int a;

};

int main()
{
    simpleCalculator ob;
    ob.getData();
    ob.calculate();

    return 0;
}