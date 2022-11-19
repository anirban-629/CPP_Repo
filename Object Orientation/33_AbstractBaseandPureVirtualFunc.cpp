#include <iostream>
using namespace std;
class Base
{
public:
    int var1 = 1;
    virtual void display() = 0; // -> *Do nothing function* --> Pure virtual function
};
class Derived : public Base
{
    int var2 = 2;
    void display() { cout << "Derived Class " << var2 << endl; }
};
int main()
{
    Base *ptr;
    Derived o2;
    ptr = &o2;
    ptr->display();
    return 0;
}