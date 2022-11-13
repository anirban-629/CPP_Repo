#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // -> Constructor
    Complex(void);
    void printData(void)
    {
        cout << "a: " << a << endl
             << "b: " << b << endl;
    }
};

Complex ::Complex(void)
{
    cout << "hello world" << endl;
    a = 0;
    b = 0;
}

int main()
{
    Complex c;
    c.printData();
    return 0;
}