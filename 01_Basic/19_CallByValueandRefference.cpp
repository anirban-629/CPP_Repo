#include <iostream>
using namespace std;
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}
void swapByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << *a << " " << *b << endl;
}

int main()
{
    int a = 10, b = 20;
    cout << "a and b in user defined function ";
    // swapByValue(a, a);
    swapByReference(&a, &b);
    cout << "a and b in main function " << a << " " << b << endl;
    return 0;
}