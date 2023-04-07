#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, d;
        cin >> x >> y >> d;

        string result = (abs(x - y) <= d) ? "YES" : "NO";
        cout << result << endl;
    }
    return 0;
}