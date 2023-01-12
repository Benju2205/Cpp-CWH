#include <iostream>
using namespace std;

// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

// //Call by reference using pointers
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int x, y;
//     cin >> x;
//     cin >> y;
//     cout << "The sum of x and y is: " << sum(x, y) << endl;
//     swap(&x, &y);
//     cout << "The value of x and y after swapping is: " << x << " and " << y << endl;
//     return 0;
// 
  
//      Call by reference variable
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    int main()
    {
        int num1,num2;
        cin>>num1>>num2;
        cout<<"The numbers are: "<<num1<<" and "<<num2<<endl;
        swap(num1,num2);
        cout<<"The numbers after swapping are: "<<num1<<" and "<<num2<<endl;
        return 0;
    }