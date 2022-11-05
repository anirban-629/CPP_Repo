#include <iostream>
using namespace std;
int c = 100;
int main(int argc, char const *argv[])
{
    int a, b, c;
    // cout << "Enter the Value of A -> ";
    // cin >> a;
    // cout << "Enter the Value of B -> ";
    // cin >> b;
    // c = a + b;

    // cout << "Sum -> " << c << endl;
    // cout << "Global C -> " << ::c;
    // ? ::c =global c

    // float d = 34.4;
    float d = 34.4f;
    // long double e = 34.4;
    long double e = 34.4l;
    // cout << "Value of d -> " << d << endl
    //  << "Value of e -> " << e << endl;
    cout << "The Size of " << d << "is " << sizeof(d) << endl
         << "The size of " << e << "is " << sizeof(e) << endl;
    int x = 100;
    cout << (float)x;
    return 0;
}
