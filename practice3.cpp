// // #include <iostream>
// // using namespace std;

// // class binary
// // {
// // protected:
// //     string s;

// // public:
// //     void getData(void)
// //     {
// //         cout << "Enter a binary number: " << endl;
// //         cin >> s;
// //     }
// //     void chk_bin()
// //     {
// //         for (int i = 0; i < s.length(); i++)
// //         {
// //             if (s.at(i) != '0' && s.at(i) != '1')
// //             {
// //                 cout << "Incorrect input" << endl;
// //                 exit(0);
// //             }
// //         }
// //     }
// //     void ones(){
// //         for(int i=0;i<s.length();i++){
// //             if(s.at(i)=='1'){
// //                 s.at(i)='0';
// //             }
// //             else{
// //                 s.at(i)='1';
// //             }
// //         }
// //     }
// //     void display(){
// //         cout<<"The ones complement of the binary number is: "<<s<<endl;
// //     }
// // };

// // int main()
// // {

// //     binary b;
// //     b.getData();
// //     b.chk_bin();
// //     b.ones();
// //     b.display();
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // class shop{
// //     protected:
// //         int price,id;
// //     public:
// //         void setPrice(void);
// //         void displayPrice(void);

// // };

// // void shop::setPrice(){
// //     cout<<"Enter the ID of the item: "<<endl;
// //     cin>>id;
// //     cout<<"Enter the price of the item: "<<endl;
// //     cin>>price;
// // }

// // void shop::displayPrice(){
// //     cout<<"The id of the item is: "<<id<<endl<<"And the price of the item is: "<<price<<endl;
// // }

// // int main()
// // {   int size,i;
// //     cout<<"Enter size of array: "<<endl;
// //     cin>>size;
// //     shop s[size];
// //     for(i=0;i<size;i++){
// //     s[i].setPrice();
// //     }
// //     for(i=0;i<size;i++){
// //         s[i].displayPrice();
// //     }
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // class shop{
// //     int a;
// //     static int counter;
// //     public:
// //         void printData(void){
// //             cout<<"The number of inputs are: "<<counter<<endl;
// //             counter++;
// //         }
// //         void setData(void){
// //             cout<<"tner a number: "<<endl;
// //             cin>>a;
// //         }
// // };
// // int shop::counter=1;

// // int main(){

// //     shop a,b;
// //     // a.setData() ;
// //     // a.setData();
// //     a.printData();
// //     b.printData();
// //     a.printData();

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // class number{
// //     protected:
// //         int a,b,asum,bsum;
// //     public:
// //         void setData(int x,int y){
// //             a=x;
// //             b=y;
// //         }
// //         void calculate(number ob1,number ob2){
// //             asum=ob1.a+ob2.a;
// //             bsum=ob2.a+ob2.a;
// //         }
// //         void display(){
// //             cout<<"The value of obj1 and obj2 a is: "<<asum<<endl;
// //             cout<<"The value of obj1 and obj2 b is: "<<bsum<<endl;

// //         }
// // };

// // int main(){

// //     number a,b,c;
// //     a.setData(1,2);
// //     b.setData(3,4);
// //     c.calculate(a,b);
// //     c.display();

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // class number{
// //     protected:
// //         int a,b;
// //         friend number sum(number);
// //         public:
// //             void setData(){
// //                 cout<<"Enter the value of a: "<<endl;
// //                 cin>>a;
// //                 cout<<"Enter the value of b: "<<endl;
// //                 cin>>b;
// //             }
// // };
// // number sum(number obj){
// //     int sum;
// //     sum=obj.a+obj.b;
// //     cout<<"The sum of the two numbers are: "<<sum<<endl;
// // }

// // int main(){

// //     number ob;
// //     ob.setData();
// //     sum(ob);

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // class number{

// //         int a,b,sum;
// //         public:
// //         friend number add(void);
// //             void setData(){
// //                 cout<<"Enter the value of a: "<<endl;
// //                 cin>>a;
// //                 cout<<"Enter the value of b: "<<endl;
// //                 cin>>b;
// //             }
// // };
// // number add(void){
// //     sum=a+b;
// //     cout<<"The sum of the two numbers is: "<<sum<<endl;
// // }

// // int main(){

// //     number ob;
// //     ob.setData();
// //     add();

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // class number{
// //     protected:
// //         int a,b;
// //     public:
// //         number(int x,int y){
// //             a=x;
// //             b=y;
// //         }
// //         void display(){
// //             cout<<"The value of a and b are: "<<a<< " and "<<b<<endl;
// //         }
// // };

// // int main(){
// //     number ob(10,20);
// //     ob.display();

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // class number{
// //     protected:
// //         int a,b=0,c=0;
// //     public:
// //         number(int x,int y){
// //             a=x;
// //             b=y;
// //             cout<<"Constructor with 2 parameters"<<endl;
// //         }
// //         number(int x){
// //             a=x;
// //             b=0;
// //             cout<<"Constructor with 1 parameters"<<endl;
// //         }
// //         number(int x,int y,int z){
// //             a=x;
// //             b=y;
// //             c=z;
// //             cout<<"Constructor with 3 parameters"<<endl;
// //         }
// //         void calculate(){
// //             int sum;
// //             sum=a+b+c;
// //             cout<<"Sum is: "<<sum<<endl;
// //         }
// // };

// // int main(){

// //     number ob1(1,2);
// //     ob1.calculate();
// //     number ob2(3);
// //     ob2.calculate();
// //     number ob3(4,5,6);
// //     ob3.calculate();

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // class number{
// //     int a,b;
// //     public:
// //     number(){}
// //         number(int x,int y){
// //             a=x;
// //             b=y;
// //         }
// //         // number(number &obj){
// //         //     a=obj.a;
// //         //     b=obj.b;
// //         // }

// //         ~number(){
// //             cout<<"Destructor invoked"<<endl;
// //         }

// //         void display(void);

// // };
// // void number::display(){
// //     cout<<"A is: "<<a<<" and B is:"<<b<<endl;
// // }
// // int main(){

// //   number ob1(10,20),ob2(ob1),ob3;
// //   ob1.display();
// //     ob2.display();

// //     ob3=ob2;
// //     ob3.display();
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // class Student
// // {
// // protected:
// //     string name;
// //     int rollNo;

// // public:
// //     void setData()
// //     {
// //         cout << "Enter name: " << endl;
// //         cin >> name;
// //         cout << "Enter roll number: " << endl;
// //         cin >> rollNo;
// //     }
// // };

// // class Test
// // {
// // protected:
// //     float Pmarks, Mmarks;

// // public:
// //     void setData1()
// //     {
// //         cout << "Enter the marks in Physics: " << endl;
// //         cin >> Pmarks;
// //         cout << "Enter the marks in Math: " << endl;
// //         cin >> Mmarks;
// //     }
// // };
// // class Show : public Test, public Student
// // {
// // public:
// //     void display()
// //     {
// //         cout << "The name of the student is: " << name << endl;
// //         cout << "The roll number is: " << rollNo << endl;
// //         cout << "The marks in Physics is: " << Pmarks << endl;
// //         cout << "The marks in Math is: " << Mmarks << endl;
// //     }
// // };

// // int main()
// // {
// //     int size = 1;
// //     Show ob[size];
// //     for (int i = 0; i < size; i++)
// //     {
// //         ob[i].setData();
// //         ob[i].setData1();
// //     }
// //     for (int i = 0; i < size; i++)
// //     {
// //         ob[i].display();
// //     }

// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // class student{
// //     protected:
// //         string name;
// //         int rollNo;
// //         public:
// //             void setData(){
// //                     cout<<"Enter name of the student: "<<endl;
// //                     cin>>name;
// //                     cout<<"Enter roll number of the student: "<<endl;
// //                     cin>>rollNo;
// //             }

// // };

// // class test:virtual public student{
// //     protected:
// //         float marks;
// //     public:
// //         void setMarks(){
// //             cout<<"Enter the marks of the student: "<<endl;
// //             cin>>marks;
// //         }
// // };
// // class sport:virtual public student{
// //     protected:
// //         float score;
// //     public:
// //         void setScore(){
// //             cout<<"Enter the score of the student: "<<endl;
// //             cin>>score;
// //         }
// // };
// // class result:public test,public sport{
// //     public:
// //         void display(){
// //             cout<<"The name of the student is: "<<name<<endl;
// //             cout<<"The roll number is: "<<rollNo<<endl;
// //             cout<<"The marks is: "<<marks<<endl;
// //             cout<<"The score is: "<<score<<endl;
// //         }
// // };

// // int main(){

// //     result ob;
// //     ob.setData();
// //     ob.setMarks();
// //     ob.setScore();
// //     ob.display();

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // class student
// // {
// //     string name;

// // public:
// //     student(string s)
// //     {
// //         name = s;
// //         cout << "Constructor number 1 called" << endl;
// //     }
// //     // void displayName()
// //     // {
// //     //     cout << "The name of the student is: " << name << endl;
// //     // }
// // };

// // class test
// // {
// //     float marks;

// // public:
// //     test(string s, float m) : student(s)
// //     {
// //         marks = m;
// //         cout << "Constructor number 2 called" << endl;
// //     }
// // };

// // class sports : public test,public student
// // {
// //     int score;

// // public:
// //     result(string s, float m, int sc) : student(s), test(m)
// //     {
// //         score = sc;
// //         cout << "Constructor number 3 called" << endl;
// //     }
// // };

// // int main()
// // {
// //     sports ob(1);

// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// class A
// {
//     int x;

// public:
//     A(int a)
//     {
//         x = a;
//         cout << "Constructor number 1 called" << endl;
//     }
//     void show()
//     {
//         cout << "x=" << x << endl;
//     }
// };
// class B : public A
// {
//     int y;

// public:
//     B(int a, int b) : A(a)
//     {
//         y = b;
//         cout << "Constructor number 2 called" << endl;
//     }
//     void show()
//     {   A::show();
//         cout << "x2=" << y << endl;
//     }
// };
// class C : public B
// {
//     int z;

// public:
//     C(int a, int b, int c) : B(a, b)
//     {   
//         z = c;
//         cout << "Constructor number 3 called" << endl;
//     }
//     void show()
//     {   B::show();
//         cout << "x3=" << z << endl;
//     }
// };

// int main()
// {

//     C obj(1, 2, 3);
//     obj.show();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A{
//         protected:
//             int a;
//         public:
//             A(int x){
//                 a=x;
//                 cout<<"A constructor invoked"<<endl;
//             }
//            virtual void display(){
//                 cout<<"The value of A is: "<<a<<endl;
//             }
// };
// class B{
//         protected:
//             int b;
//         public:
//             B(int y){
//                 b=y;
//                 cout<<"B constructor invoked"<<endl;
//             }
//             void display(){
//                 cout<<"The value of B is: "<<b<<endl;
//             }
// };
// class C:public B,public A{
//         protected:
//             int c;
//         public:
        
//             C(int x,int y,int z):A(x),B(y){
//                 c=z;
//                 cout<<"C constructor invoked"<<endl;
//             }
//             void display(){
//                 cout<<"The value of a is: "<<a<<endl;
//                 cout<<"The value of b is: "<<b<<endl;
//                 cout<<"The value of c is: "<<c<<endl;
//             }
// };

// int main(){

//     // A *base_ptr;
//     // C c_obj(1,2,3);

//     // base_ptr=&c_obj;
//     // base_ptr->display();
    
//     C *c_ptr=new C[2];
//     for(int i=0;i<2;i++){
//         c_ptr->display();
//     }

//     return 0;
// }



#include<iostream>
using namespace std;

class Shop{
        int id;
        float price;
    public:
        void setData(int a,float b){
            id=a;
            price=b;
        }
        void display(){
            cout<<"The ID of the item is: "<<id<<endl;
            cout<<"The price is: "<<price<<endl;
        }
};

int main(){
    int size=2,i,id;
    float price;
  Shop *ptr=new Shop[size];
  Shop *ptr2=ptr;
  for(i=0;i<size;i++){
    cout<<"Enter ID of the item: "<<endl;
    cin>>id;
    cout<<"Enter price of the item: "<<endl;
    cin>>price;
    ptr->setData(id,price);
    ptr++;
    }

for(i=0;i<size;i++){
    ptr2->display();
    ptr2++;
}
  

    return 0;
}