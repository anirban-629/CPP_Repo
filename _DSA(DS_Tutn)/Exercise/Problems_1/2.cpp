#include <iostream>
using namespace std;
int main()
{
    int a = 30, b = 40, c = 30;
    cout << "Maximum(" << a << "," << b << "," << c << ")="
         << ((a > b ? a : b) > c ? (a > b ? a : b) : c);

    return 0;
}