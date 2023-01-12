#include<iostream>
using namespace std;

class Base{
    public:
        int a=1;
        virtual void display(){             //virtual class declared
            cout<<"The value of base class is: "<<a<<endl;
        }
};
class Derived:public Base{
    public:
        int a=2;
        void display(){
            cout<<"The value of derived class is: "<<a<<endl;
        }
};

int main(){

    Base *base_ptr;
    Derived derived_obj;
    base_ptr=&derived_obj;

    base_ptr->display();                    //invokes the derived class display function

    return 0;
}