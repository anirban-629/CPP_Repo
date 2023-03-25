#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string result;
    int arr[7];
    while (t--)
    {
        int sunny = 0, rainy = 0;
        for (int i = 0; i < 7; i++)
        {
            int inp;
            cin >> inp;
            arr[i] = inp;
            if (arr[i] == 0)
            {
                rainy++;
            }
            else
            {
                sunny++;
            }
        }
        result = rainy > sunny ? "NO" : "YES";
        cout << result << endl;
    }
    return 0;
}
