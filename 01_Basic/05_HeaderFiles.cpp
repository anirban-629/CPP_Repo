// -> two types of header files are there

#include <iostream>          // * 1. builtin
#include "05_myheaderfile.h" // * 2. user defined

using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Hello, world!" << endl;
    cout << "Function of My custom header file  " << sum(10, 20);

    int a = 10, b = 10;

    cout << "a+b " << a + b << endl;
    cout << "a-b " << a - b << endl;
    cout << "a*b " << a * b << endl;
    cout << "a/b " << a / b << endl;
    cout << "a%b " << a % b << endl;
    cout << "a++ " << a++ << endl;
    cout << "a-- " << a-- << endl;
    cout << "++a " << ++a << endl;
    cout << "++a " << --a << endl;

    cout << "a==b " << (a == b) << endl;
    cout << "a>b " << (a > b) << endl;
    cout << "a>=b " << (a >= b) << endl;
    cout << "a<b " << (a < b) << endl;
    cout << "a<=b " << (a <= b) << endl;
    cout << "a!=b " << (a != b) << endl;

    cout << "(a!=b) " << ((a != b) && (a < b)) << endl;
    cout << "(a!=b) " << ((a != b) || (a < b)) << endl;
    cout << "(a!=b) " << (!(a == b)) << endl;
    cout << "(a!=b) " << (!(a != b)) << endl;

    return 0;
}
