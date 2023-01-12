#include<iostream>
using namespace std;

class Shop{
    int a;
    static int counter;
    public:
    void getData(void){
        cout<<"Enter a number: "<<endl;
        cin>>a;
        counter++;
    }
    void printCounter(void){
        cout<<"The value of counter is: "<<counter<<endl;
    }
    static void printCounterStatic(void){
        cout<<"The value of counter is: "<<counter<<endl;       //static function definition
    }
};
int Shop::counter;      //static variable definition

int main(){
    Shop a,b,c;
    a.getData();
    a.getData();
    a.getData();
    a.printCounter();

    b.getData();
    b.printCounter();

    c.getData();
    Shop::printCounterStatic(); //without an object we called a static function

    return 0;
}