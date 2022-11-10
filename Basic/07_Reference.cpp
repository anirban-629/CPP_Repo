#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float x = 455;
    float &y = x; // ! y is a Reference variable
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}
