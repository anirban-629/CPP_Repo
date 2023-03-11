#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("ANIRBAN");
    s.push("_");
    s.push("Mishra");


    cout << s.empty() << endl
         << s.size() << endl;

    s.pop();

    cout << s.size() << endl;

    return 0;
}