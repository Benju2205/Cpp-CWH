#include<iostream>
using namespace std;

class number{
    
    public: number(){
        cout<<"Constructor invoked!!"<<endl;
    }
    ~number(){
        cout<<"Destructor invoked"<<endl;
    }
};

int main(){

    number o1;  
    number o2;

    return 0;
}