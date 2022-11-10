#include <iostream>
using namespace std;

union Money
{
    int rice;
    char car;
    float pounds;
} typedef mny;

int main()
{
    // We can use only one
    // If we set one extra then we're gonna get garbage value
    mny food;
    food.rice = 100;
    // food.car = 'a';
    // food.pounds = 123;
    cout << food.rice << endl;

    mny soup;

    return 0;
}