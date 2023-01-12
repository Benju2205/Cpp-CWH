#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;

public:
    Student(string, int);
    virtual void display() {}               //virtual function
};
Student::Student(string s, int a)
{
    name = s;
    rollNo = a;
}

class Test : public Student
{
protected:
    float marks;

public:
    Test(string s, int a, float m) : Student(s, a)
    {
        marks = m;
    }
    void display()
    {
        cout << "The name of the student is: " << name << endl;
        cout << "The roll no of the student is: " << rollNo << endl;
        cout << "The marks of the student is: " << marks << endl;
    }
};

class Sports : public Student
{
protected:
    float score;

public:
    Sports(string s, int a, float sc) : Student(s, a)
    {
        score = sc;
    }
    void display()
    {
        cout << "The name of the student is: " << name << endl;
        cout << "The roll no of the student is: " << rollNo << endl;
        cout << "The score of the student is: " << score << endl;
    }
};

int main()
{

    string s;
    int rollNo;
    float marks, score;
    
        cout << "Enter the name of the student: " << endl;
        cin >> s;
        cout << "Enter the rollNo of the student: " << endl;
        cin >> rollNo;
        cout << "Enter the marks of the student: " << endl;
        cin >> marks;
        cout << "Enter the score of the student: " << endl;
        cin >> score;
    

    Test test_obj(s,rollNo,marks);
    Sports sports_obj(s,rollNo,score);

    // Student *base_ptr=new Student[2];
    Student *base_ptr[2];
    base_ptr[0] = &test_obj;
    base_ptr[1] = &sports_obj;

    base_ptr[0]->display();
    base_ptr[1]->display();

    return 0;
}