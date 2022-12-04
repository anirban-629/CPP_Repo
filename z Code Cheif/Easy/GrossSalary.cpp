#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float salary;
        cin >> salary;
        if (salary >= 1500)
        {
            printf("%.2f", float(salary + 500 + (salary * 98 / 100)));
            cout << endl;
        }
        else
        {
            printf("%.2f", float(salary + (salary * 10 / 100) + (salary * 90 / 100)));
            cout << endl;
        }
    }
    return 0;
}
