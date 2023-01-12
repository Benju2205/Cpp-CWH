#include <iostream>
using namespace std;

// int sum(int,int);
// int main(){

//     int a,b;
//     cin>>a>>b;
//     cout<<"Sum is : "<<sum(a,b);

//     return 0;
// }

// int sum(int a,int b){
//     return a+b;
// }

// void swap(int *x,int *y)
// {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"The first number is: "<<a<<" and the second number is: "<<b<<endl;
//     swap(&a,&b);
//     cout<<"After Swapping, the first number is: "<<a<<" and the second number is: "<<b<<endl;
//     return 0;
// }

// inline int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"Sum is: "<<sum(a,b);
//     return 0;
// }

// int factorial(int a)
// {
//     if (a == 0)
//     {
//         return 1;
//     }
//     return a * factorial(a - 1);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: " << endl;
//     cin >> num;
//     cout << "The factorial of the number is: " << factorial(num);
//     return 0;
// }

// class binary
// {
//     string s;

// public:
//     void setData(void)
//     {
//         cout << "Enter a binary number: " << endl;
//         cin >> s;
//     }
//     void chk_bin(void)
//     {
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s.at(i) != '0' && s.at(i) != '1')
//             {
//                 cout << "Incorrect input." << endl;
//                 exit(0);
//             }
//                 }
//     }
//     void displayData(void)
//     {
//         cout << "The binary number is: ";
//         for (int i = 0; i < s.length(); i++)
//         {
//             cout << s.at(i);
//         }
//     }
// };

// int main()
// {
//     binary s;
//     s.setData();
//     s.chk_bin();
//     s.displayData();
//     return 0;
// }

// class number
// {
//     int a, b;

// public:
//     friend number product(number, number);
//     void setData(int num1, int num2)
//     {
//         a = num1;
//         b = num2;
//     }
//     void displayData(void)
//     {
//         cout << "Value of a and b are: " << a << " " << b << endl;
//     }
//     void setData2(number o1, number o2)
//     {
//         a = o1.a + o2.a;
//         b = o1.b + o2.b;
//     }
//     void displayData2(void)
//     {
//         cout << "The sum of a of first and second object is: " << a << endl;
//         cout << "The sum of b of first and second object is: " << b << endl;
//     }
// };

// number product(number o1, number o2)
// {
//     int aProduct = o1.a * o2.a;
//     int bProduct = o1.b * o2.b;
//     cout << "The product of a of the first and second object is: " << aProduct << endl;
//     cout << "The product of b of the first and second object is: " << bProduct << endl;
// }

// int main()
// {
//     number x, y, z;
//     x.setData(1, 2);
//     x.displayData();
//     y.setData(3, 4);
//     y.displayData();

//     z.setData2(x, y);
//     z.displayData2();

//     product(x, y);
// }

// class number{
//     int x,y;
//     public:
//         number(int a,int b){
//             x=a;
//             y=b;
//         }
//         friend number calculateDistance(number,number);

// };
// number calculateDistance(number o1,number o2){
//             double distance= (o1.x+o2.x)-(o1.y+o2.y);
//             cout<<"The distance is: "<<distance<<endl;
//         }

// int main(){
//     number p1(5,5);
//     number p2(5,5);
//     calculateDistance(p1,p2);
//     return 0;
// }

// class number{
//     int x,y;
//     public:
//         number(){}
//         number(int a,int b){
//             x=a;
//             y=b;
//         }
//         number(int a, float b){
//             x= a+1;
//             y=b+1;
//         }
//         void displayData(){
//             cout<<"The value of first is: "<<x<<" and second is: "<<y<<endl;
//         }
// };
// int main(){
//     number o1,o2;
//     int a,b;
//     float B;
//     cout<<"Enter first and second numeber: "<<endl;
//     cin>>a>>b;
//     o1= number(a,b);
//     o1.displayData();

//     cout<<"Enter first and second numeber: "<<endl;
//     cin>>a>>B;
//     o2= number(a,B);
//     o2.displayData();

//     return 0;
    
// }

// int main(){
//     float *ptr;
//     float a;
//     int b;
//     ptr=&b;
    
// }

class Base{
    public:
        int base_var;
        virtual void display(){
                cout<<"Displaying base class base_var: "<<base_var<<endl;
        }
};
class Derived:public Base{
    public:
        int derived_var;
        void display(){
                cout<<"Displaying derived class derived_var: "<<derived_var<<endl;
                cout<<"Displaying base class base_var: "<<base_var<<endl;
        }
};

int main(){
    Base base_obj;
    Base *baseptr;
    baseptr=&base_obj;

    Derived derived_obj;
    derived_obj.derived_var=20;
    baseptr=&derived_obj;
    
    baseptr->base_var=10;
    baseptr->display();

    // Derived *derived_ptr;
    // derived_ptr=&derived_obj;
    // derived_ptr->base_var=20;
    // // derived_ptr->display();
    // derived_ptr->derived_var=30;
    // derived_ptr->display();
    
}