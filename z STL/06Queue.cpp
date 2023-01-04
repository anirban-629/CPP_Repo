#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("ANIRBAN");
    q.push("_");
    q.push("Mishra");

    cout << "First Element: " << q.front() << endl;

    q.pop();

    cout << "First Element after Pop: " << q.front() << endl;



    return 0;
}