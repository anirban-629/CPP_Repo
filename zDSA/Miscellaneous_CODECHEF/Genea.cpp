#include <iostream>
using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << a << endl;
    }
    else if (a == 'R' || b == 'R')
    {
        cout << "R" << endl;
    }
    else if ((a == 'B' && b == 'G') || (a == 'G' && b == 'B'))
    {
        cout << 'B' << endl;
    }
    return 0;
}
