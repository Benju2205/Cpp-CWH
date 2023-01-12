#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void display()
    {
        cout << "The value of base class var_base is " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying derived class var_derived " << var_derived << endl;
        cout << "Displaying base class var_base " << var_base << endl;
    }
};

int main()
{
    // Base base_obj;
    // Base *base_ptr=&base_obj;

    // Derived derived_obj;
    // base_ptr=&derived_obj;

    // base_ptr->var_base = 10;
    // base_ptr->printData();

    // base_ptr->var_derived;       // var_derived not accessible because base_ptr is baseclass pointer. As base_ptr points to derived class object, it does not mean that base_ptr cann access var_derived


    // Base *base_ptr = new Base;
    // Derived derived_obj;
    // base_ptr=&derived_obj;
    // base_ptr->var_base=4;
    // base_ptr->printData();

    // Base *base_ptr;
    // Derived derived_obj;
    // base_ptr=&derived_obj;
    // base_ptr->var_base=10;
    // base_ptr->printData();
    // return 0;

    Base base_obj;
    Base *base_ptr;
    
    Derived derived_obj;
    base_ptr=&derived_obj;

    base_ptr->var_base=40;
    base_ptr->display();

    Derived *derived_ptr;
    derived_ptr=&derived_obj;
    derived_ptr->var_base=300;
    derived_ptr->var_derived=400;
    derived_ptr->display();
}