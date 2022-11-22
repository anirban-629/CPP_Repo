#include <iostream>
using namespace std;
int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    return x * factorial(x - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << factorial(n) << endl;
    }
    return 0;
}