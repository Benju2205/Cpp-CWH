#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void print_roll_no(void);
};
void Student::set_roll_no(int a)
{
    roll_no = a;
}
void Student::print_roll_no()
{
    cout << "The roll number of the student is: " << roll_no << endl;
}

class Exam : public Student
{
protected:
    float math_marks, physics_marks;

public:
    // void set_math_marks(float);
    // void set_physics_marks(float);
    void set_marks(float, float);
    void print_marks(void);
};
void Exam::set_marks(float a, float b)
{
    math_marks = a;
    physics_marks = b;
}
void Exam::print_marks(void)
{
    cout << "The marks of Maths is: " << math_marks << " and marks of Physics is :" << physics_marks << endl;
}

class Result : public Exam
{
public:
    void print_percentage();
};
void Result::print_percentage()
{
    cout << "The result in percentage is: " << (math_marks + physics_marks) / 2 << endl;
}

int main()
{

    Result benjamin;
    benjamin.set_roll_no(52);
    benjamin.print_roll_no();
    benjamin.set_marks(67.15, 78.23);
    benjamin.print_marks();
    benjamin.print_percentage();

    return 0;
}