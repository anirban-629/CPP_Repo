#include <iostream>
using namespace std;
int main()
{
    // Pointer -> Data Type

    int a = 10;
    int *b = &a;
    // ! * -> derefference operator
    // ! & -> address of operator

    cout << "Address of a using (&a) -> " << &a << endl;
    cout << "Address of a using (b) -> " << b << endl;
    cout << "Value stored at address b (*b) -> " << *b << endl;

    // Address of adress of ...
    // Storing pointer's address** 
    int **c = &b;
    cout << "Address of value of a that is stored in pointer b" << c << endl;

    int ***d = &c;
    int ****e = &d;

    return 0;
}