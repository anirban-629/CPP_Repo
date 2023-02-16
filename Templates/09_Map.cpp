#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> marks;
    marks["Rahul"] = 100;
    marks["Anirban"] = 99;
    marks.insert({{"A", 100},
                  {"B", 200}});
    map<string, int>::iterator iter;

    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    cout << marks.size() << endl
         << marks.max_size();

    return 0;
}