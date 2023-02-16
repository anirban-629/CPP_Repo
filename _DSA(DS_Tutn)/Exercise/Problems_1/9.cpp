#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a Alphabet -> ";
    cin >> c;
    if (int(c) >= 48 && int(c) <= 57)
    {
        cout << "NUMBER";
    }
    else if (int(c) >= 33 && int(c) <= 65)
    {
        cout << "Special Char";
    }
    else
    {
        cout << "Something Else";
    }
    return 0;
}