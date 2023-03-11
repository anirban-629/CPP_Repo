#include <iostream>
using namespace std;
int getMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << getMax(abs((x1 - x2)), abs((y1 - y2))) << endl;
    }
    return 0;
}