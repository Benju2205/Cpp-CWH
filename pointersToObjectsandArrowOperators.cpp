#include<iostream>
using namespace std;

class number{
    int a,b;
    public:
        void setData(int x,int y){
            a=x;
            b=y;
        }
        void printData(){
            cout<<"The value of a and b is: "<<a<<" and "<<b<<endl;
        }
};

int main(){
        // number ob;
        // number *ptr=&ob;

        number *ptr=new number;
        ptr->setData(10,20);
        ptr->printData();

        number *ptr1=new number;
        ptr1->setData(30,40);
        ptr1->printData();

        number *ptr2=new number[3];
        ptr2->setData(50,60);
        ptr2->printData();
    


    return 0;
}