#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {23, 45, 56, 89};
    int *p = marks;

    // cout << "value at Address " << p << " -> " << *p << endl;
    // cout << "value at Address " << p + 1 << " -> " << *(p + 1) << endl;
    // cout << "value at Address " << p + 2 << " -> " << *(p + 2) << endl;
    // cout << "value at Address " << p + 3 << " -> " << *(p + 3) << endl;

    cout << *(p++) << endl;
    cout << *(p) << endl;
    cout << *(++p) << endl;
    cout << *(p) << endl;
    cout << *(p++) << endl;
    cout << *(p++) << endl;
    cout << *(p) << endl; // -> Garbage Value
    return 0;
}