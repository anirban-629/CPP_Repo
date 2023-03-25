#include <iostream>
using namespace std;

int main()
{
    char inp;
    cin >> inp;
    char c = toupper(inp);
    cout << c << endl;
    if (c == 'A' ||
        c == 'E' ||
        c == 'I' ||
        c == 'O' ||
        c == 'U')
    {
        cout << "VOWEL" << endl;
    }
    else
    {
        cout << "CONSONANT" << endl;
    }
    return 0;
}
