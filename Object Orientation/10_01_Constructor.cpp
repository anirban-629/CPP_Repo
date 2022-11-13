#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printData(void)
    {
        cout << "a: " << a << " - "
             << "b: " << b << endl;
    }
};

Complex ::Complex(int x = 0, int y = 0)
{
    a = x;
    b = y;
}

class A
{
    int a;

public:
    A(int a) // -> Constructor
    {
        this->a = a;
        cout << this->a;
    }
};
int main()
{
    // ! Implicit Call
    Complex a(1, 2);
    a.printData();

    // ! Explicit Call
    Complex b = Complex(3, 4);
    b.printData();

    A c(11111);

    return 0;
}