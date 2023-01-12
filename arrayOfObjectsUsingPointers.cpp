#include<iostream>
using namespace std;

// class ShopItem{
//     int id;
//     float price;
//     public:
//         void setData(int a,float b){
//                 id=a;
//                 price=b;
//         }
//         void printData(void){
//             cout<<"The id and price of the item are: "<<id<<" and "<<price<<endl;
//         }
// };

// int main(){

//         int a,i,size;
//         float b;
//         cout<<"Enter how many item you want to store: "<<endl;
//         cin>>size;
//         ShopItem *ptr=new ShopItem[size];    
//         ShopItem *ptr2=ptr;
//         for(i=0;i<size;i++){
//             cout<<"Enter id and price of item "<<i+1<<":"<<endl;
//             cin>>a>>b;
//             ptr->setData(a,b);
//             ptr++;         
//         }
//         for(i=0;i<size;i++){
//             ptr2->printData();
//             ptr2++;
//         }


//     return 0;
// }

class Shop{
    int a;
    float b;
    public:
        void setData(int x,int y){
            a=x;
            b=y;
        }
        void printData(void){
            cout<<"The price of item id "<<a<<" is "<<b<<endl;
        }
};

int main(){
    int size,i,a;
    float b;
    cout<<"Enter size: "<<endl;
    cin>>size;
    Shop *ptr=new Shop[size];
    Shop *ptr2=ptr;
    for(i=0;i<size;i++){
        cout<<"Enter id and price of the item: "<<endl;
        cin>>a>>b;
        ptr->setData(a,b);
        // ptr->printData();
        ptr++;
    }
    for(i=0;i<size;i++){
        ptr2->printData();
        ptr2++;
    }

}