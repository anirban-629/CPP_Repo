#include <iostream>
using namespace std;
class Base
{
public:
    int var1;
    void display()
    {
        cout << "Base Class " << var1 << endl;
    }
};
class Derived : public Base
{
    int var2;
    void display()
    {
        cout << "Derived Class " << var2 << endl;
    }
};
int main()
{
    Base *ptr1;
    Base o1;

    // Derived *ptr2;
    Derived o2;

    ptr1 = &o2;
    // ptr2 = &o1; //-> ERRROR
    ptr1->var1 = 100;
    // ptr1->var2 = 200; // -> ERRROR
    ptr1->display(); // * Base Class display will be displayed.

    return 0;
}
