#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, arr[3];
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            arr[0] = a;
            if (b > c)
            {
                arr[1] = b;
                arr[2] = c;
            }
            else
            {
                arr[1] = c;
                arr[2] = b;
            }
            cout << arr[1] << endl;
        }
        else if (b > a && b > c)
        {
            arr[0] = b;
            if (a > c)
            {
                arr[1] = a;
                arr[2] = c;
            }
            else
            {
                arr[1] = c;
                arr[2] = a;
            }
            cout << arr[1] << endl;
        }
        else
        {
            arr[0] = c;
            if (a > b)
            {
                arr[1] = a;
                arr[2] = b;
            }
            else
            {
                arr[1] = b;
                arr[2] = a;
            }
            cout << arr[1] << endl;
        }
    }
    return 0;
}