#include <iostream>

using namespace std;
int main()
{
    int r;
    cout << "Enter Radius -> ", cin >> r;
    cout << "Diameter -> " << 2 * r << endl
         << "Circumference -> " << 2 * 3.14 * r << endl
         << "Area -> " << 3.14 * r * r;
    return 0;
}