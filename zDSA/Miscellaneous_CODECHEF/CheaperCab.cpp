#include <iostream>
using namespace std;

int main()
{
    int time;
    cout << "Enter How many Cabs -> ";
    cin >> time;
    while (time--)
    {
        int c1, c2;
        cout << "Enter Cab 1 Price -> ";
        cin >> c1;
        cout << "Enter Cab 2 Price -> ";
        cin >> c2;
        string result = (c1 > c2) ? "Cab2" : "Cab1";
        cout << result;
    }
    return 0;
}
