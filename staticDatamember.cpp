#include <iostream>
using namespace std;

// class Shop{
//     int itemPrice[100];
//     int itemID[100];
//     int counter=0;
//     public:
//         void printCounter(void);
//         void setData(void);
//         void displayData(void);
// };

// void Shop::printCounter(void){
//     cout<<"The counter number is "<<counter<<endl;
// }

// void Shop::setData(void){
//     cout<<"Enter the item ID: "<<endl;
//     cin>>itemID[counter];
//     cout<<"Enter the item price: "<<endl;
//     cin>>itemPrice[counter];
//     counter++;
// }

// void Shop::displayData(void){
//     for(int i=0;i<counter;i++){
//         cout<<"The price of the item with ID "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
//     }
// }

// int main(){

//     Shop a,b;
//     a.setData();
//     a.setData();
//     a.printCounter(); //cpunter is 2
//     b.setData();
//     b.printCounter(); //counter is 1

//     return 0;
// }

class Shop
{
    int itemPrice[100];
    int itemID[100];
    static int counter;

public:
    void printCounter(void);
    void setData(void);
    void displayData(void);
};

int Shop::counter;

void Shop::printCounter(void)
{
    cout << "The counter number is " << counter << endl;
}

void Shop::setData(void)
{
    cout << "Enter the item ID: " << endl;
    cin >> itemID[counter];
    cout << "Enter the item price: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayData(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{

    Shop a, b;
    a.setData();
    a.setData();
    a.printCounter(); // counter is 2
    b.setData();
    b.printCounter(); // counter is 3 because counter is now a static data member

    return 0;
}