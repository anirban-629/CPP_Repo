#include <iostream>
using namespace std;
int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    cout << "------------" << endl;
    Meal m1 = dinner;
    cout << (m1 == 2) << endl;
    cout << (m1 == 1) << endl;
    cout << (m1 == 0) << endl;
    return 0;
}