#include<iostream>
using namespace std;

class number{
    int x,y;
    public:
        number(){}
        number(int a,int b){
            x=a;
            y=b;
        }
        number(int a, float b){
            x= a+1;
            y=b+1;
        }
        void displayData(){
            cout<<"The value of first is: "<<x<<" and second is: "<<y<<endl;
        }
};
int main(){
    number o1,o2;
    int a,b;
    float B;
    cout<<"Enter first and second numeber: "<<endl;
    cin>>a>>b;
    o1= number(a,b);
    o1.displayData();

    cout<<"Enter first and second numeber: "<<endl;
    cin>>a>>B;
    o2= number(a,B);
    o2.displayData();

    return 0;
    
}