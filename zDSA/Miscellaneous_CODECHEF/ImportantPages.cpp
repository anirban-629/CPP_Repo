#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b;
    cin >> a >> b;
    if (a == 0)
    {
        cout << "https://www.codechef.com/practice\n";
    }
    else if (a == 1 && b == 0)
    {
        cout << "https://www.codechef.com/contests\n";
    }
    else if (a == 1 && b == 1)
    {
        cout << "https://discuss.codechef.com\n";
    }
    return 0;
}