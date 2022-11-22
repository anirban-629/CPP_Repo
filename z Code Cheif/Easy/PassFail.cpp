#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, p;
        cin >> n >> x >> p;
        int marks = (x * 3) - ((n - x) * (1));
        cout << marks << endl;
        string result = (marks >= p) ? "PASS" : "FAIL";
        cout << result << endl;
    }
    return 0;
}
