#include <iostream>
using namespace std;

// class sapiens{
//     public:
//         int eyes=2;
//         sapiens(){

//             cout<<"No of eyes: "<<eyes<<endl;
//         }
// };
// class human:public sapiens{
//     public:
//     int tails=0;
//     human(){
//     cout<<"No of tails: "<<tails<<endl;
// }};

// int main(){

//     sapiens o1;
//     human o2;

//     return 0;
// }

class sapiens
{
public:
    int eyes;
    sapiens(){}
    sapiens(int a)
    {
        eyes = a;
        cout << "No of eyes: " << eyes << endl;
    }
};
class human : public sapiens
{
public:

    human(sapiens a)
    {
        eyes = a.eyes;
        
        cout<<"No of ears: "<<eyes<<endl;
    }
};

int main()
{

    sapiens o1;
    o1=sapiens(4);
    // o2=human(o1);
    
    human o2(o1);

    return 0;
}