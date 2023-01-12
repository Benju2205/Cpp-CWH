#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main(){

    int c;
    cout<<"\t\t\t__________________________________________\n\n\n";
    cout<<"\t\t\t                   Welcome to the Login page               \n\n\n";
    cout<<"\t\t\t___________________    MENU    ________________\n\n";
    cout<<"                                                     \n\n";
    cout<<"\t| Press 1 to LOGIN                               |"<<endl;
    cout<<"\t| Press 2 to REGISTER                            |"<<endl;
    cout<<"\t| Press 3 to if you forgot your PASSWORD         |"<<endl;
    cout<<"\t| Press 4 to EXIT                                |"<<endl;
    cout<<"\n\t\t\t Please enter your choice : ";
    cin>>c;
    cout<<endl;

    switch(c)
    {
        case 1:
            login();
            break;
    }


    return 0;
}