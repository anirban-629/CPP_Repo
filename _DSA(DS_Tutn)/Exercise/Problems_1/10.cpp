#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter the Character -> ";
    cin >> c;
    if ((int(c) >= 65 && int(c) <= 90) || (int(c) >= 97 && int(c) <= 122))
    {
        cout << ((int(c) >= 65 && int(c) <= 90) ? "UPPERCASE" : "LOWERCASE");
    }
    else
    {
        cout << "No Case";
    }
    return 0;
}