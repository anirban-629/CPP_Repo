#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the Number -> ";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "MONDAY";
        break;
    case 2:
        cout << "TUESDAY";
        break;
    case 3:
        cout << "WEDNESDAY";
        break;
    case 4:
        cout << "THRUSDAY";
        break;
    case 5:
        cout << "FRIDAY";
        break;
    case 6:
        cout << "SATURDAY";
        break;
    case 7:
        cout << "SUNDAY";
        break;

    default:
        cout << "INVALID_INPUT";
        break;
    }
    return 0;
}