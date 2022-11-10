#include <iostream>
using namespace std;

// Function Prototypes
// -> type function-name (arguments)
// int mul(int , int );
int mul(int a, int b);

int sum(int a, int b)
{

    int c = a + b;
    return c;
}
int main()
{
    cout << "Sum of 10,20 -> " << sum(10, 20) << endl;
    cout << "Multiplication of 10,20 -> " << mul(10, 20) << endl;
    return 0;
}
int mul(int a, int b)
{
    int c = a * b;
    return c;
}