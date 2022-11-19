#include <iostream>
using namespace std;
class Base
{
public:
    int var1 = 1;
    virtual void display() { cout << "Base Class " << var1 << endl; }
};
// Virtual is used to use the inherited classe's function
class Derived : public Base
{
    int var2 = 2;
    void display() { cout << "Derived Class " << var2 << endl; }
};
int main()
{
    Base *ptr;
    Base o1;
    Derived o2;
    ptr = &o2;
    ptr->display();
    return 0;
}