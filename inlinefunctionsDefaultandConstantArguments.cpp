#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    return a * b;
}

float moneyReceived(int money, float factor=1.08)// factor is a default argument
{
    return money*factor;
}
int main()
{

    // int x, y;
    // cin >> x >> y;
    // cout << "The product is: " << product(x, y);
    // cout << "The product is: " << product(x, y);
    // cout << "The product is: " << product(x, y);
    // cout << "The product is: " << product(x, y);
    // cout << "The product is: " << product(x, y);
    // cout << "The product is: " << product(x, y);
    // cout << "The product is: " << product(x, y);

    int money;
    cin>>money;
    cout<<"If you have "<<money<<", you will receive "<<moneyReceived(money)<<" at the end of the year";
    return 0;

    
}