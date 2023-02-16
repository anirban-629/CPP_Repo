#include <iostream>
using namespace std;
int main()
{
    int x = 11;
    cout << ((x % 5 == 0 && x % 11 == 0) ? "DIVISIBLE BY 5 AND 11" : "NOT DIVISIBLE");
    return 0;
}