#include <iostream>
using namespace std;

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter; //int counter=0; also works

public:
    void setCounter(void);
    void getData(void);
    void displayData(void);
};

void Shop::setCounter(void)
{
    counter = 0;
}

void Shop::getData(void)
{
    cout << "Enter the item ID:" << endl;
    cin >> itemID[counter];
    cout << "Enter the price of the item:" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayData(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with ID: " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop s;
    s.setCounter();
    s.getData();
    s.getData();
    s.getData();
    s.displayData();

    return 0;
}