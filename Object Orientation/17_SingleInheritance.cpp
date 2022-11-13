#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1(void) { return data1; }
int Base ::getData2(void) { return data2; }

// class Derived : Base
class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};

void Derived::process()
{
    // setData();
    data3 = data2 * getData1();
}

void Derived::display()
{
    cout << "Value of data 1: " << getData1() << endl;
    cout << "Value of data 2: " << data2 << endl;
    cout << "Value of data 3: " << data3 << endl;
}

int main()
{
    Derived d;
    d.setData();
    d.process();
    d.display();
    return 0;
}