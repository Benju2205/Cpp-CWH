#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base1::greet();                 //Ambiguity Resolved
    }
};

int main()
{   
    Base1 b1;
    b1.greet();
    Base2 b2;
    b2.greet();
    Derived d;
    d.greet();

    return 0;
}