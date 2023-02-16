#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter Angle 1 -> ";
    cin >> a;
    cout << "Enter Angle 2 -> ";
    cin >> b;
    cout << "Enter Angle 3 -> ";
    cin >> c;

    ((a + b + c) == 180) ? cout << "TRIANGLE" : cout << "NOT TRIANGLE";
    return 0;
}