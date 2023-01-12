#include<iostream>
using namespace std;

int main(){
    
    int a=3;
    int *ptr=&a;

    cout<<*ptr<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<ptr<<endl;

    int **b=&ptr;
    cout<<**b<<endl;
    cout<<&b<<endl;
    cout<<b;
    return 0;
}