#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a Alphabet -> ";
    cin >> c;
    if (
        c == 'a' ||
        c == 'e' ||
        c == 'i' ||
        c == 'o' ||
        c == 'u' ||
        c == 'A' ||
        c == 'E' ||
        c == 'I' ||
        c == 'O' ||
        c == 'U')
    {
        cout << "VOWEL";
    }
    else if ((int(c) >= 65 && int(c) <= 90) || (int(c) >= 92 && int(c) <= 122))
    {
        cout << "Consonent";
    }
    else
    {
        cout << "Not Alphabet";
    }
    return 0;
}