#include <iostream>
using namespace std;

class number
{
    int a, b;

public:
    friend number product(number, number); // Friend declaration
    void setData(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void displayData(void)
    {
        cout << "Value of a and b are: " << a << " " << b << endl;
    }
    void setData2(number o1, number o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void displayData2(void)
    {
        cout << "The sum of a of first and second object is: " << a << endl;
        cout << "The sum of b of first and second object is: " << b << endl;
    }
};

number product(number o1, number o2) // Friend Function
{
    int aProduct = o1.a * o2.a;
    int bProduct = o1.b * o2.b;
    cout << "The product of a of the first and second object is: " << aProduct << endl;
    cout << "The product of b of the first and second object is: " << bProduct << endl;
}

int main()
{
    number x, y, z;
    x.setData(1, 2);
    x.displayData();
    y.setData(3, 4);
    y.displayData();

    z.setData2(x, y);
    z.displayData2();

    product(x, y);
    return 0;
}