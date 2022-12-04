#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    while (true)
    {
        int n;
        cin >> n;
        a.push_back(n);
        if (n == 42)
        {
            break;
        }
    }
    for (int i = 0; i < (a.size() - 1); i++)
    {
        cout << a.at(i) << endl;
    }
    return 0;
}