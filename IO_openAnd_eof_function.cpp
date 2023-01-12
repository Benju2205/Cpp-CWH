#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream obj;
    obj.open("IOSample3.txt");
    obj << "Hello.\n";
    obj << "My\n";
    obj << "name\n";
    obj << "is\n";
    obj << "Benjamin\n";
    obj.close();

    string s;
    ifstream obj2;
    obj2.open("IOSample3.txt");
    while (obj2.eof() != true)
    {
        getline(obj2,s);
        cout << s << endl;
    }
    obj2.close();

    return 0;
}