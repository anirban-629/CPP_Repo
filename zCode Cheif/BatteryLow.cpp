#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string result = (x <= 15) ? "YES" : "NO";
        cout << result;
    }
    return 0;
}
