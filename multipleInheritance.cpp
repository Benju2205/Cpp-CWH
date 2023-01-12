#include<iostream>
using namespace std;

class Student{
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

class Exam{
    protected:
        float mathMarks,physicsMarks;
        public:
            void setMarks(float,float);
            void printMarks(void);
};
    void Exam::setMarks(float a,float b){
        
        mathMarks=a;
        physicsMarks=b;
    }
    void Exam::printMarks(){
        cout<<"The marks of Maths and Physics are: "<<mathMarks<<" and "<< physicsMarks<<endl;
    }

class Result:public Student,public Exam{
    protected:
        float percentage;
    public:
        void printPercentage(void){
            percentage= (mathMarks+physicsMarks)/2;
            cout<<"The result in percentage is: "<<percentage<<endl;
        }
};

int main(){

    Result benjamin;
    benjamin.setRollNo(52);
    benjamin.printRollNo();
    benjamin.setMarks(72.8,76.75);
    benjamin.printMarks();
    benjamin.printPercentage();


    return 0;
}