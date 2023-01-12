#include <iostream>
using namespace std;

// int factorial(int n)
// {   
//     if(n<=1){
//         return 1;
//     }

//     return n * factorial(n - 1);
// }

int fib(int n)
{
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main()
{

    // int num;
    // cin >> num ;
    // cout << "The factorial of " << num << " is " << factorial(num);

    int num;
    cin>>num;
    cout<<"The fib no at position "<<num<<" is "<<fib(num);

    return 0;
}