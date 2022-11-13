#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setRoll(int rollNum) { roll = rollNum; }
    void getRoll() { cout << "Roll Number -> " << roll << endl; }
};

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void getMarks(void)
    {
        cout << "Math Marks -> " << maths << endl
             << "Physical Marks -> " << physics << endl;
    }
};

class Result : public Exam
{
    float percentage;

public:
    void displayResults()
    {
        getRoll();
        getMarks();
        cout << "Percentage: " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result Anirban;
    Anirban.setRoll(100);
    Anirban.setMarks(99.5, 98.5);
    Anirban.displayResults();
    return 0;
}