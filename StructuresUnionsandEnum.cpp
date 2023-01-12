#include<iostream>
using namespace std;

// struct employee{
//          int eID;
//          char favChar;
//          float salary;
//     };

// int main(){
//     struct employee harry;
//     harry.eID=1;
//     harry.favChar='c';
//     harry.salary=12000;

//      struct employee benjamin;
//     benjamin.eID=2;
//     benjamin.favChar='b';
//     benjamin.salary=12400;

//     cout<<harry.eID<<endl;
//     cout<<harry.favChar<<endl;
//     cout<<harry.salary<<endl;

//     cout<<benjamin.eID<<endl;
//     cout<<benjamin.favChar<<endl;
//     cout<<benjamin.salary<<endl;

// typedef struct employee{
//          int eID;
//          char favChar;
//          float salary;
//     } ep;

// int main(){
    // ep harry;
    // harry.eID=1;
    // harry.favChar='c';
    // harry.salary=12000;

    //  ep benjamin;
    // benjamin.eID=2;
    // benjamin.favChar='b';
    // benjamin.salary=12400;

    // cout<<harry.eID<<endl;
    // cout<<harry.favChar<<endl;
    // cout<<harry.salary<<endl;

    // cout<<benjamin.eID<<endl;
    // cout<<benjamin.favChar<<endl;
    // cout<<benjamin.salary<<endl;

    // union employee{
    //     int empID;
    //     char favChar;

    // };
    // int main(){
    //     union employee u1;
    //     u1.empID=1;
    //     cout<<u1.empID<<endl;
    //     u1.favChar='c';
    //     cout<<u1.empID;

    int main(){

        enum employee{Rahul,Rohit,Manoj,Pankaj};
        cout<<Rahul<<endl;
        employee second=Rohit;
        cout<<second;
    return 0;
}