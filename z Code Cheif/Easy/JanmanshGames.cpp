#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int count = x;
        for (int i = 0; i < y; i++)
        {
            count++;
        }

        string result = (count % 2) == 0 ? "Janmansh" : "Jay";
        cout << result << endl;
    }

    return 0;
}