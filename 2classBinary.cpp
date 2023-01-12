#include <iostream>
using namespace std;

// class binary
// {
// private:
//     string s;

// public:
//     void read(void);
//     void chk_bin(void);
//     void display(void);
//     void ones_compl(void);
// };

// void binary::read(void)
// {
//     cout << "Enter a binary number: " << endl;
//     cin >> s;
// }

// void binary::chk_bin(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "Incorrect input" << endl;
//             exit(0);
//         }
        
//     }
// }

// void binary::display(void)
// {   
//     cout<<"The binary number is: ";
//     for (int i = 0; i < s.length(); i++)
//     {   
        
//         cout << s.at(i);
//     }
//     cout<<endl;
// }

// void binary::ones_compl(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s.at(i) == '0')
//         {
//             s.at(i) = '1';
//         }
//         else
//         {
//             s.at(i) = '0';
//         }
//     }
// }

// int main()
// {
//     binary b;
//     b.read();
//     b.chk_bin();
//     b.display();
//     b.ones_compl();
//     b.display();

//     return 0;
// }

class binary{
    string s;
    public:
        void read(void);
        void display(void);
        void chk_bin(void);
        void ones_comp(void);
};

void binary:: read(void){
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}

void binary:: chk_bin(void){
    for(int i=0; i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect input";
            exit(0);
        }
    }
}

void binary:: display(void){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

void binary:: ones_comp(void){

    // chk_bin();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

int main(){
    binary b;
    b.read();
    b.chk_bin();
    // b.display();
    b.ones_comp();
    b.display();
    return(0);
}