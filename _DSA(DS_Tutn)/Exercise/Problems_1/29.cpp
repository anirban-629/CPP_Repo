#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter Number 1: ", cin >> x,
        cout << "Enter Number 2: ", cin >> y;
    cout << x << "+" << y << "-> " << x + y << endl
         << x << "-" << y << "-> " << x - y << endl
         << x << "*" << y << "-> " << x * y << endl
         << x << "/" << y << "-> " << x / y;

    return 0;
}