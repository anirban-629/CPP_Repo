#include <iostream>
#include <math.h>
using namespace std;

bool checkPrime(int n)
{
    int i, flag = 1;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (n <= 1)
        flag = 0;

    if (flag == 1)
    {

        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (checkPrime(a + b))
        {
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
        }
    }
    return 0;
}
