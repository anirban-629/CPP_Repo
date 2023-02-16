#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    if (x == 0)
    {
        cout << "ZERO";
    }
    else
    {
        cout << (x > 0 ? "POSITIVE" : "NEGATIVE");
    }
    return 0;
}