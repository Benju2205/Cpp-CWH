#include<iostream>
#include<fstream>
// #include<string>
using namespace std;

// int main(){

//     string s;
//     s="My name is Benjamin. Thank you.";
//     ofstream obj1("IOSample3.txt");
//     obj1<<s;
//     obj1.close();

//     string st;
//     ifstream obj("IOSample3.txt");
//     getline(obj,st);
//     cout<<"Hello " + st;
//     obj.close();
    

//     return 0;
// }

// int main(){
//     string s2="Im fine thank you....";
//     ofstream obj2("IOSample2.txt");
//     obj2<<s2;
//     obj2.close(); 
//     string s;
//     ifstream obj("IOSample2.txt");
//     getline(obj,s);
//     cout<<s;
//     // obj.close();

// }

int main(){

    string s="Bla bla bla\n";
    ofstream obj;
    obj.open("IOSample.txt");
    obj<<s;
    obj<<"asdsad asd sad sad\n";
    obj<<"ujtbg nghn uyj ytuj ytj\n";
    obj.close();

    string s2;
    ifstream obj2;
    obj2.open("IOSample.txt");
    while(obj2.eof()!=true){
    getline(obj2,s2);
    cout<<s2<<endl;
    }
    obj2.close();
    

}