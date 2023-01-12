#include <iostream>
using namespace std;

class number
{
    int a, b;

public:
    number(void); // Constructor declaration
    void printData(void)
    {
        cout << "The value of a and b is: " << a << " and " << b;
    }
};
number::number(void)
{ // Default constructor as it takes no parameter
    a = 1;
    b = 2;
}

int main()
{
    number o;
    o.printData();

    return 0;
}