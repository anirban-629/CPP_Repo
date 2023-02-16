#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter Length -> ", cin >> x, cout << "Enter Breadth -> ", cin >> y;
    cout << "Area -> " << 2 * (x * y);
    return 0;
}