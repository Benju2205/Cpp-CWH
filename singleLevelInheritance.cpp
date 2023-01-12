#include <iostream>
using namespace std;

class Number                                  // Base Class
{
    int a;

public:
    int b;
    void setData();
    int getData1();
    int getData2();
};

void Number::setData()
{
    a = 10;
    b = 20;
}
int Number::getData1()
{
    return a;
}
int Number::getData2()
{
    return b;
}

class derivedNumber : public Number         // Derived Class
{
    int c;

public:
    void product()
    {
        c = b * getData1();
        cout << "The product of a and b is: " << c << endl;
    }
};
int main()
{

    derivedNumber o2;
    o2.setData();
    o2.product();
    return 0;
}