#include <iostream>
using namespace std;
int main()
{
    int length;
    cout << "Enter length -> ", cin >> length;
    cout << "Kilometer -> " << length / 100000 << endl
         << "Meter -> " << length / 100;
    return 0;
}