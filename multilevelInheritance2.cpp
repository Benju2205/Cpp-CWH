#include<iostream>
using namespace std;

class student{
    string name;
    public:
        student(string s){
            name=s;
            cout<<"Constructor1 invoked"<<endl;
        }
};

class test:public student{
    float marks;
    public:
        test(string s,float m):student(s)
        {
            marks=m;
            cout<<"Constructor2 invoked"<<endl;
        }
};
class results:public test{
    float score;
    public:
        results(string s,float m,float sc):test(s,m)
        {
            score=sc;
            cout<<"Constructor3 invoked"<<endl;
        }
};

int main(){
    results ob("Benjamin",2,3);

    

    return 0;
}