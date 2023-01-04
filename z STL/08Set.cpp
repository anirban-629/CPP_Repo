#include <iostream>
#include <set>

using namespace std;
int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    s.insert(2);

    cout << "Size of S: " << s.size() << endl;

    // Sorted
    for (auto &&i : s)
    {
        cout << i << " ";
    }

    cout << endl
         << "AFTER DELETION: " << endl;
    s.erase(s.begin());

    for (auto &&i : s)
    {
        cout << i << " ";
    }
    cout << endl
         << s.count(5) << endl
         << s.count(-2) << endl;

    set<int>::iterator itr = s.find(5);

    cout << *itr << endl;
 
    return 0;
}