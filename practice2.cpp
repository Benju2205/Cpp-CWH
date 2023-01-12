#include<iostream>
using namespace std;

class Student{
    protected:
        string name;
        int rollNo;
    public:
        void setDataStudent(string s,int r){
            name=s;
            rollNo=r;
        }
        virtual void display(){
            cout<<"The name of the student is: "<<name<<endl;
            cout<<"The roll number of the student is: "<<rollNo<<endl;
        }
};

class Test:public Student{
    protected:
        float subjMarks;
    public:
        void setDataTest(float m){
            subjMarks=m;
        }
        void display(){
            cout<<"The name of the student is: "<<name<<endl;
            cout<<"The roll number of the student is: "<<rollNo<<endl;
            cout<<"The marks of the student is: "<<subjMarks<<endl;
        }
};

class Sports:public Student{
    protected:
        float score;
    public:
        void setDataSports(float m){
            score=m;
        }
        void display(){
            cout<<"The name of the student is: "<<name<<endl;
            cout<<"The roll number of the student is: "<<rollNo<<endl;
            cout<<"The score of the student is: "<<score<<endl;
        }
};

int main(){

    // string name="Benjamin";
    // int rollNo=52;
    // float subjMarks,score;

    // subjMarks=97;
    // test_obj.setData(subjMarks);
    // test_obj.display();
    // Test test_obj;

    // score=99;
    // Sports sports_obj;
    // sports_obj.setData(score);
    // sports_obj.display();

    // Student *base_ptr[2];
    // base_ptr[0]=&test_obj;
    // base_ptr[1]=&sports_obj;

    // base_ptr[0]->display();


//     Student base_obj;
//    base_obj.setDataStudent("Benjamin",52);

    Test testObj;
    testObj.setDataTest(97.8);
    Sports sportsObj;
    sportsObj.setDataSports(85.8);

    Student *base_ptr[2];
    base_ptr[0]=&testObj;
    base_ptr[1]=&sportsObj;

    base_ptr[0]->setDataStudent("Benjamin",52);
    base_ptr[1]->setDataStudent("Abraham",77);

    base_ptr[0]->display();
    base_ptr[1]->display();

    return 0;
}

// #include <iostream>
// using namespace std;

// class Student
// {
// protected:
//     string name="Benjamin";

// public:
//     void setName(string s)
//     {
//         name = s;
//     }
//    virtual void display()
//     {
//         cout << "The name of the studentt is: " << name << endl;
//     }
// };

// class Marks : public Student
// {
// protected:
//     float marks=97.8;

// public:
//     void setMarks(float m)
//     {
//         marks = m;
//     }
//     void display()
//     {
//         cout << "The name of the student is: " << name << endl;
//         cout << "The marks of the student is: " << marks << endl;
//     }
// };

// int main()
// {   
//     Student *base_ptr;
//     Marks derived_obj;
//     base_ptr=&derived_obj;

//     base_ptr->setName("Benjamin");
//     derived_obj.setMarks(97.7);             //cant access derived class properties using base_ptr because the pointer belongs to base class although it is pointing to derived class object
//     base_ptr->display();

//     return 0;
// }