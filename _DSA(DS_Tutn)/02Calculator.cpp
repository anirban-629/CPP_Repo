#include <iostream>
using namespace std;
int main()
{
    int x, y, option;
    cout << "Enter Number 1: ";
    cin >> x;
    cout << "Enter Number 2: ";
    cin >> y;

    cout << "Enter Option: " << endl
         << "<1> +" << endl
         << "<2> -" << endl
         << "<3> *" << endl
         << "<4> /" << endl
         << ": ";
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "x+y=" << x + y;
        break;
    case 2:
        cout << "x-y=" << x - y;
        break;
    case 3:
        cout << "x*y=" << x * y;
        break;
    case 4:
        cout << "x/y=" << x / y;
        break;

    default:
        cout << "Invalid Input";
    }

    return 0;
}