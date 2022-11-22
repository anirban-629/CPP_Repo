#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if (n<=(m-k))
        {
            cout << "YES";
        }
        
        else
        {
            cout << "NO";
        }
    }
    return 0;
}
