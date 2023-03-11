#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "Anirban";
    m[2] = "Mishra";

    m.insert(
        {{3, "Mishra"},
         {4, "Family"},
         {5, "Hurrah!"}});

    m.erase(2);

    for (auto s : m)
    {
        cout << s.first << " " << s.second << endl;
    }

    return 0;
}