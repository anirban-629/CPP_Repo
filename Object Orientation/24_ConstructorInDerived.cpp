#include <iostream>
using namespace std;
// ! base class constructor runs first
class Base1
{
    int data1;

public:
    Base1() {}
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 constructor called" << endl;
    }
    void printData1() { cout << "Base1 class Data: " << data1 << endl; }
};
class Base2
{
    int data2;

public:
    Base2() {}
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 constructor called" << endl;
    }
    void printData2() { cout << "Base2 class Data: " << data2 << endl; }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d)
        : Base1(a),
          Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived constructor called" << endl;
    }
    void printDataDerived() { cout << "Derived class Data: " << derived1 << " and " << derived2 << endl; }
};
int main()
{
    Derived a(1, 2, 3, 4);
    a.printData1();
    a.printData2();
    a.printDataDerived();
    return 0;
}