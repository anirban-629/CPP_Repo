#include <iostream>
using namespace std;
class A
{
    int a;
    int b;

public:
    A(int i, int j) : a(i), b(j)
    // A(int i, int j) : a(i), b(i+j)
    // A(int i, int j) : a(i), b(a + j)
    // A(int i, int j) : a(b + i), b(j)
    // A(int i, int j) : b(j), a(i + b)
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};
int main()
{
    A a(10, 20);
    return 0;
}