#include<iostream>
#include<fstream>
using namespace std;



    int main(){
        string st="Hello Duniyaa";
        ofstream obj("IOSample.txt");   //opening a file using a constructor
        obj<<st; 
        obj<<"hellllllllo";                       //writing the contents in string variable into the file

        string st1;
        ifstream obj1("IOSample2.txt");   //opening a file using a constructor
        getline(obj1,st1);                //storing the first line contents into the string variable
        cout<<st1;                        //displaying the contents in the string variable on the console
    }