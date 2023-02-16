#include <iostream>
using namespace std;
int main()
{
    int unit;
    cout << "Enter Unit -> ";
    cin >> unit;
    float amount = 0;

    if (unit >= 50)
    {
        unit -= 50;
        amount += (50 * .5);
    }

    if (unit >= 100 || unit < 100)
    {
        if (unit >= 100)
        {
            unit -= 100;
            amount += (100 * .75);
        }
        else
        {
            unit = 0;
            amount += (unit * .75);
        }
    }

    if (unit >= 250 || unit < 250)
    {
        if (unit >= 150)
        {
            unit -= 150;
            amount += (150 * 1.2);
        }
        else
        {
            unit = 0;
            amount += (unit * 1.2);
        }
    }

    if (unit >= 250 || unit < 250)
    {
        unit = 0;
        amount += (unit * 1.5);
    }

    cout << "Unit Charges -> " << amount + (amount * (20 / 100));
    return 0;
}
// 50
// 100
// 250