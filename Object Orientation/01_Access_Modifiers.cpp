#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    void setData(int, int, int);
    int d, e;
    void getData()
    {
        cout << a << endl
             << b << endl
             << c << endl
             << d << endl
             << e << endl;
    }
} Rahul;

void Employee::setData(int a, int b, int c)
{
    this->a = a; // -> this-> basically identifies that variable which is inside the Employee Class
    this->b = b;
    this->c = c;
}

int main()
{
    Employee Anirban;
    cout << "ANIRBAN: " << endl;
    Anirban.setData(1, 2, 3);
    Anirban.d = 4;
    Anirban.e = 5;
    Anirban.getData();

    cout << "RAHUL: " << endl;
    Rahul.setData(6, 7, 8);
    Rahul.d = 9;
    Rahul.e = 10;
    Rahul.getData();
    return 0;
}