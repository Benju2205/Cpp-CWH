#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int area(int a){
    return a*a;
}
int area(int a,int b){
    return a*b;
}
int main()
{

    cout << "The sum of 3 and 6 is " << add(3, 6)<<endl;
    cout << "The sum of 3 and 6 is " << add(3, 6, 1)<<endl;
    cout << "The area of square of 4 is " << area(4)<<endl;
    cout << "The area of rectangle of 3 and 6 is " << area(3, 6)<<endl;
    return 0;
}