#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setData(int a){
            this->a=a;
        }
        void printData(){
            cout<<"the value of a is: "<<a<<endl;
        }
        // int returnThis(int a){
        //     return this->a;
        // }
};

int main(){

  A ob;
  ob.setData(4);
  ob.printData();  
// cout<<"Return this value : "<<ob.returnThis(a);

    return 0;
}