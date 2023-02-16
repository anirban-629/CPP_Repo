#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter your Amount -> ";
    cin >> amount;
    int n2k, n5h, n2h, n1h, n50, n20, n10, n5, n2, n1;
    n2k = n5h = n2h = n1h = n50 = n20 = n10 = n5 = n2 = n1 = 0;

    if (amount >= 2000)
    {
        n2k = amount / 2000;
        amount -= n2k * 2000;
    }
    if (amount >= 500)
    {
        n5h = amount / 500;
        amount -= n5h * 500;
    }
    if (amount >= 200)
    {
        n2h = amount / 200;
        amount -= n2h * 200;
    }
    if (amount >= 100)
    {
        n1h = amount / 100;
        amount -= n1h * 100;
    }
    if (amount >= 50)
    {
        n50 = amount / 50;
        amount -= n50 * 50;
    }
    if (amount >= 20)
    {
        n20 = amount / 20;
        amount -= n20 * 20;
    }
    if (amount >= 10)
    {
        n10 = amount / 10;
        amount -= n10 * 10;
    }
    if (amount >= 5)
    {
        n5 = amount / 5;
        amount -= n5 * 5;
    }
    if (amount >= 2)
    {
        n2 = amount / 2;
        amount -= n2 * 2;
    }
    if (amount >= 1)
    {
        n1 = amount / 1;
        amount -= n1 * 1;
    }

    cout << "2000 Ruppee Notes -> " << n2k << endl
         << "500 Ruppee Notes -> " << n5h << endl
         << "200 Ruppee Notes -> " << n2h << endl
         << "100 Ruppee Notes -> " << n1h << endl
         << "50 Ruppee Notes -> " << n50 << endl
         << "20 Ruppee Notes -> " << n20 << endl
         << "10 Ruppee Notes -> " << n10 << endl
         << "5 Ruppee Notes -> " << n5 << endl
         << "2 Ruppee Notes -> " << n2 << endl
         << "1 Ruppee Notes -> " << n1 << endl;

    return 0;
}