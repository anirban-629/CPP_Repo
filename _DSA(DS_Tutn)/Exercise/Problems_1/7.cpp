#include <iostream>
using namespace std;
int main()
{
    char c = '#';
    cout << ((int(c) >= 65 && int(c) <= 90) || (int(c) >= 92 && int(c) <= 122)
                 ? "ALPHABET"
                 : "NOT ALPHABET");
    return 0;
}