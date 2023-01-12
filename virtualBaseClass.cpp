#include<iostream>
using namespace std;

class Student{                                      // Student is the Virtual Base Class
    protected:
        int rollNo;
        public:
            void setRollNo(int);
            void printRollNo(void);
};
void Student::setRollNo(int a){
    rollNo=a;
}
void Student::printRollNo(){
    cout<<"The roll number is: "<<rollNo<<endl;
}

class Test:virtual public Student{                  //Virtual class declaration
    protected:
        float mathMarks,physicsMarks;
    public:
        void setMarks(float,float);
        void printMarks(void);
};
void Test::setMarks(float a,float b)
{
        mathMarks=a;
        physicsMarks=b;
}
void Test::printMarks(){
        cout<<"The marks are: "<<mathMarks<<" in Maths, and "<<physicsMarks<<" in Physics."<<endl;
}

class Sports:virtual public Student{                //Virtual class declaration
    protected:
        float sportsMarks;
    public:
        void setSportsMarks(float);
        void printSportsMarks(void);
};
void Sports::setSportsMarks(float a){
    sportsMarks=a;
} 
void Sports::printSportsMarks(){
    cout<<"The marks in sports are: "<<sportsMarks<<endl;
}

class Result:public Test,public Sports{
    protected:
        float totalMarks;
    public:
        void setTotalMarks(void);
        void printTotalMarks(void);
};
void Result::setTotalMarks(){
    totalMarks=mathMarks+physicsMarks+sportsMarks;
}
void Result::printTotalMarks(){
    cout<<"The total marks in overall is: "<<totalMarks<<endl;
}
int main(){
    Result benjamin;
    benjamin.setRollNo(52);
    benjamin.printRollNo();
    benjamin.setMarks(59.62,78.32);
    benjamin.printMarks();
    benjamin.setSportsMarks(59.67);
    benjamin.printSportsMarks();
    benjamin.setTotalMarks();
    benjamin.printTotalMarks();

    return 0;
}