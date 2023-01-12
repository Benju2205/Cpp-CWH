#include <iostream>
using namespace std;

// class Employee
// {
// private:
//     int a, b;

// public:
//     int c, d;
//     void setData(int m , int n);
//     void printData();
// };

// void Employee::setData(int m, int n)
// {
//     a=m;
//     b=n;
// }
// void Employee::printData()
// {
//     cout << "The value of a is: " << a << endl;
//     cout << "The value of b is: " << b << endl;
//     cout << "The value of c is: " << c << endl;
//     cout << "The value of d is: " << d << endl;
// }
// int main()
// {
//     int num1,num2;
//     Employee benjamin;
//     benjamin.c=3;
//     benjamin.d=4;
//     cout<<"Enter the value of a and b: "<<endl;
//     cin>>num1>>num2;
//     benjamin.setData(num1,num2);
//     benjamin.printData();

//     return 0;
// }

class Animal
{
private:
    string name, nickname;

public:
    int legs, tail;

    void setData(string name, string nickname);
    void printData()
    {
        cout << "The name of the animal is: " << name << endl;
        cout << "The nickname of the animal is: " << nickname << endl;
        cout << "The number of legs of the animal is: " << legs << endl;
        cout << "The tail of the animal is: " << tail << endl;
    }
};
void Animal::setData(string name1, string nickname1)
{
    name = name1;
    nickname = nickname1;
}

int main(){
    Animal dog;
    dog.legs=2;
    dog.tail=1;
    dog.setData("Tommy","Tom");
    dog.printData();
    return 0;
}