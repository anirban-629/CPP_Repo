#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter Side 1 -> ";
    cin >> a;
    cout << "Enter Side 2 -> ";
    cin >> b;
    cout << "Enter Side 3 -> ";
    cin >> c;

    if (a == b == c)
    {
        cout << "EQUILATERAl";
    }
    else if (a == b || b == c || a == c)
    {
        cout << "ISOCELES";
    }
    else
    {
        cout << "SCALENE";
    }
    return 0;
}