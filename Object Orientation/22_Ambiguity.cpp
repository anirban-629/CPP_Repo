#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "Hi" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "Hello" << endl;
    }
};

class Derived : public Base1, public Base2
{
    // -> Resolution:
public:
    void greet()
    {
        Base1::greet();
        Base2::greet();
    }
};

int main()
{
    Base1 obj1;
    Base2 obj2;
    // obj1.greet();
    // obj2.greet();

    Derived obj3;
    // obj3.greet(); //! Ambiguity as there are two greet()
    obj3.greet();
    return 0;
}