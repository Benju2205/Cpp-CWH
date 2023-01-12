#include <iostream>
using namespace std;

int main()
{

    int marks[] = {12, 32, 43, 54};
    // cout<<marks[0];
    // cout<<marks[1];
    // cout<<marks[2];
    // cout<<marks[3];

    int mathmarks[4];
    mathmarks[0] = 12;
    mathmarks[0] = 23;
    mathmarks[0] = 32;
    mathmarks[0] = 45;

    marks[1] = 22; // marks updation

    // for(int i=0;i<4;i++)
    // {
    //     cout<<"The value of marks at "<<i<<" is "<<marks[i]<<endl;
    // }

    // int i = 0;
    // while (i < 4)
    // {
    //     cout << "The marks at " << i << " is " << marks[i] << endl;
    //     i++;
    // }

    int i=0;
    do{
        cout << "The marks at " << i << " is " << marks[i] << endl;
        i++;
    }
    while(i<4);

    return 0;
}