#include <iostream>
using namespace std;

class Number                                //Base Class
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

class derivedNumber : private Number             //Derived Class
{
    int c;

public:
    void product()
    {   setData();                              //calling setData() function inside a derived member function as it is private and not accessible using an object
        c = b * getData1();
        cout << "The product of a and b is: " << c << endl;
    }
};
int main()
{
    
    derivedNumber o2;
    // o2.setData();                 //cannot call setData() function using an object as it becomes private. So in order to access it, we need call it using a derived member function
    o2.product();
    return 0;
}