#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

public:

    Base(int x)
    {
        a = x;
    }
    virtual void display()=0;                             //Pure Virtual Function declaration
    // {
    //     cout << "Value of base a is: " << a << endl;
    // }
};

class Derived : public Base
{
protected:
    int a;

public:
    Derived(int x,int y):Base(x)
    {
        a = y;
    }
    void display()
    {
        cout << "The value of derived class a is: " << a << endl;
    }
};

int main()
{
    Base *base_ptr;
    Derived derivedObj(4,4);

    base_ptr = &derivedObj;
                                        //display function is the polymorphed function----> one name, different function
    base_ptr->display();                //without declaring the display function as "pure virtual function" and if the derived class do not have the display function,then it will invoke the base class' display function
                                        //but with pure virtual function, we MUST!! redefine the display function in the derived class
    return 0;
}