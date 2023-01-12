#include<iostream>
using namespace std;

 class number{
    int a,b;
    public:
    number(){}
        number(int x,int y){
            a=x;
            b=y;
        }

        void display(void){
            cout<<"Value of first and second is: "<<a<<" and "<<b<<endl;
        }

        number(number &obj){
            a= obj.a;
            b=obj.b;
        }
 };

int main(){

    number o1,o2;
    o1=number(1,2);
    o2=number(o1);
    o1.display();
    o2.display();


    return 0;
}