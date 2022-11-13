#include <iostream>
using namespace std;
class Deposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    // Deposit();   // -> Default constructor
    Deposit() {} // -> Default constructor
    Deposit(int p, int y, double r);
    Deposit(int p, int y, int r);
    void show();
};

// Deposit::Deposit()
// {
//     cout << "No arguments were given" << endl;
// }

Deposit::Deposit(int p, int y, double r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}
Deposit::Deposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = double(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

void Deposit::show()
{
    cout << endl
         << "Principal amount: " << principal << endl
         << "Return Value after " << years << " is: " << returnValue << endl;
}

int main()
{
    // Deposit d2;

    // Deposit d1(100, 1, 0.03);
    // d1.show();

    // Deposit d3(100, 1, 3);
    // d3.show();

    return 0;
}