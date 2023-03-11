#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b, count = 0;
        cin >> x >> y >> a >> b;
        if (x != a && x != b)
        {
            count++;
        }
        if (y != a && y != b)
        {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
