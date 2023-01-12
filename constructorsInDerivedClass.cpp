#include <iostream>
using namespace std;

// class Base1
// {
//     int a;

// public:
//     Base1(int x)
//     {
//         a = x;
//         cout << "Base1 constructor called." << endl;
//     }
//     void printBase1(void)
//     {
//         cout << "Value of base1 is: " << a << endl;
//     }
// };

// class Base2
// {
//     int b;

// public:
//     Base2(int x)
//     {
//         b = x;
//         cout << "Base2 constructor called." << endl;
//     }
//     void printBase2(void)
//     {
//         cout << "Value of base2 is: " << b << endl;
//     }
// };

// class Derived : public Base1, public Base2
// {
//     int total;

// public:
//     Derived(int a, int b, int c) : Base1(a), Base2(b)
//     {
//         total = c;
//         cout << "Derived constructor called." << endl;
//     }
//     void printTotal()
//     {
//         cout << "The value of derived is: " << total << endl;
//     }
// };
// int main()
// {
//     Derived d(1,2,3);
//     d.printBase1();
//     d.printBase2();
//     d.printTotal();

//     return 0;
// }

class Base1{
    int a;
    public:
        Base1(int x){
            a=x;
            cout<<"Base1 class constructor called: "<<endl;
        }
        void printBase1(){
            cout<<"The value of Base1 is: "<<a<<endl;
        }
};

class Base2{
    int a;
    public:
        Base2(int x){
            a=x;
            cout<<"Base2 class constructor called: "<<endl;
        }
        void printBase2(){
            cout<<"The value of Base2 is: "<<a<<endl;
        }
};

class Derived:public Base2,public Base1{
    int a;
    public:
        Derived(int i,int j, int k):Base1(j),Base2(k){
            a=i;
            cout<<"Derived class constructor called: "<<endl;
        }
        void printDerived(){
            cout<<"The value of Derived is: "<<a<<endl;
        }
};

int main(){
    Derived d(1,2,3);
    d.printBase1();
    d.printBase2();
    d.printDerived();
}

