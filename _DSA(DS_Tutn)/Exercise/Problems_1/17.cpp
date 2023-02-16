#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << "Enter number 3: ";
    cin >> c;
    int discriminent = pow(b, 2) - 4 * a * c;
    if (discriminent > 0)
    {
        cout << "ROOT 1 -> " << (-b + sqrt(discriminent)) / (2 * a) << endl
             << "ROOT 1 -> " << (-b - sqrt(discriminent)) / (2 * a);
    }
    else if (discriminent == 0)
    {
        cout << "ROOT1=ROOT2=" << -b / (2 * a);
    }
    else if (discriminent < 0)
    {
        cout << "ROOT 1 -> " << -b / (2 * a) << endl
             << "ROOT 1 -> " << sqrt(-discriminent) / (2 * a);
    }

    return 0;
}