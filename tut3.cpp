#include<iostream>
using namespace std;

int main(){
    // int a=2;
    // int b=a+1;

    // if((a=3)==b) {
    //     cout<<a;
    // }
    // else{
    //     cout<<a+5;
    // }

    // int sum=0,i=1;
    // while(i<=5){
    //     sum=sum+i;
    //     i++;
    // }
    // cout<<sum;

    // int n, i;
    // cin>>n;
    // for(i=2;i<n;i++)
    // {
    //     if(n%i!=0)
    //     {
    //         cout<<"the no is prime\n";
    //     }
    //     else{
    //         cout<<"\nThe no is not prime";
    //     }
    // }

    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }

    // for(int i=1;i<=20;i++)
    // {
    //     cout<<i<<endl;
    // }

    // int i=1;
    // while(i<=20){
    //     cout<<i<<endl;
    //     i++;
    // }

    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }
    // while(i<=20);

    // int n,i=1;
    // cin>>n;
    // do{
    //     cout<<n<<"*"<<i<<"="<<n*i<<endl;
    //     i++;
    // }
    // while(i<=10);

    int n,i=1;
    cin>>n;
    for(i=1;i<=10;i++){
        int result=n*i;
        cout<<n<<"*"<<i<<"="<<result<<endl;
    }
    return 0;
}