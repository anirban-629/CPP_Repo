// ! Not Clear

#include <iostream>
using namespace std;
class Student
{
protected:
    int roll;

public:
    void setRoll(int value) { roll = value; }
    void printRoll() { cout << "Roll: " << roll << endl; }
};
class Test : virtual public Student
{
protected:
    float math, physics;

public:
    void setMarks(int a, int b)
    {
        math = a;
        physics = b;
    }
    void printMarks()
    {
        cout << "Result ->" << endl
             << "Math: " << math << endl
             << "Physics: " << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void setScore(float s) { score = s; }
    void printScore()
    {
        cout << "Sports: " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = math + physics + score;
        printRoll();
        printMarks();
        printScore();
        cout << "Total Score: " << total << endl;
    }
};
int main()
{
    Result Anirban;
    Anirban.setRoll(100);
    Anirban.setMarks(66, 70);
    Anirban.setScore(12039);
    Anirban.display();
    return 0;
}