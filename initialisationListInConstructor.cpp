#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    // Number() {}
    // Number(int x, int y): a(x),b(y)
    // Number(int x, int y): a(y),b(x)
    // Number(int x, int y): a(x),b(y+x)
    Number(int x, int y): b(y),a(y+b)
    
    {
        // a = x;
        // b = y;
        cout << "The value of a and b is: " <<endl<< a << " and " << b << endl;
    }
};

int main()
{

    Number ob(10,20);
    // ob = Number(10, 20);

    return 0;
}