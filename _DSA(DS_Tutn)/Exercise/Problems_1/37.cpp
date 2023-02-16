#include <iostream>
using namespace std;

int power(int p, int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return p * power(p, x - 1);
    }
}

int main()
{
    cout << "Power(4,2) -> " << power(4, 2);
    return 0;
}