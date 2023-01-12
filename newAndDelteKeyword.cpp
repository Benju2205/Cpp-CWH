#include <iostream>
using namespace std;

int main()
{

    // int a = 4;
    // int *ptr = &a;
    // cout << "Value of a: " << a << endl;
    // cout << "Value of a: " << *ptr << endl;

    // int *ptr = new int(8);
    // delete ptr;
    // cout<<"Value of ptr:"<<*ptr<<endl;

    int *arr = new int[4];
    arr[0] = 1;
    arr[1] = 2;
    delete arr;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
}