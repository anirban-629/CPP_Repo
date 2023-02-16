#include <iostream>
using namespace std;
int main()
{
    int salary;
    cout << "Enter your salary -> ";
    cin >> salary;
    (salary <= 10000) ? cout << "Gross Salary -> " << (salary + (salary * (20 / 100)) + (salary * (80 / 100))) : ((salary <= 20000) ? cout << "Gross Salary -> " << (salary + (salary * (25 / 100)) + (salary * (90 / 100))) : ((salary > 20000) ? cout << "Gross Salary -> " << (salary + (salary * (30 / 100)) + (salary * (95 / 100))) : cout << "No"));
    return 0;
}