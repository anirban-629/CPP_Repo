// Stateless Lambda Expression
// Statefull Lambda Expression
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a = {3, 5, 1, 8, 13, 6};
    auto cmp = [](int a, int b)
    {
        return a > b;
    };
    sort(a.begin(), a.end(), cmp);
    for (auto x : a)
    {
        cout << x << endl;
    }
    return 0;
}