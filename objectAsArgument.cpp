#include <iostream>
using namespace std;

class number
{
    int a, b;

public:
    void firstObj(void)
    {
        cout << "First object a = " << a << " and b = " << b << endl;
    }
    void secondObj(void)
    {
        cout << "Second object a = " << a << " and b = " << b << endl;
    }
    void argObj(void)
    {
        cout << "Sum of 'a' of first and second object is: " << a << endl;
        cout << "Sum of 'b' of first and second object is: " << b << endl;
    }
    void setData(int, int);
    void setData2(number, number);
};
void number::setData(int num1, int num2)
{
    a = num1;
    b = num2;
}
void number::setData2(number o1, number o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}
int main()
{

    number x, y, z;
    x.setData(1, 2);
    x.firstObj();
    y.setData(3, 4);
    y.secondObj();

    z.setData2(x, y);
    z.argObj();
    return 0;
}