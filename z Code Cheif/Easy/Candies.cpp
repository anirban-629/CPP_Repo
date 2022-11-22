#include <iostream>
using namespace std;

int maxFrequency(int *arr, int n)
{
    int maxcount = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxcount)
        {
            maxcount = count;
        }
    }
    return maxcount;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int size = 2 * n;
        int a[size];
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }
        cout << maxFrequency(a, size) << endl;
        if (maxFrequency(a, size) < 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
