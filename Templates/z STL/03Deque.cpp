#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // d.pop_front();
    // d.pop_back();

    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    cout << d.at(0);
    d.erase(d.begin(), d.begin() + 1);
    for (auto &&i : d)
    {
        cout << i << endl;
    }

    return 0;
}