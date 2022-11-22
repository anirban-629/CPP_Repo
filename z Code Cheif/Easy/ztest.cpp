#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if (t == 1 || (t > 10 && t < 20))
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
    return 0;
}