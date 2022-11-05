#include <iostream>
using namespace std;
// Makes the function at that particular position where the function was called
// if the function is minimal then make it inline

// ! don't use inline functions while using static variable
// ! don't use inline functions while recursion

inline int divide(int x, int y)
{
    static int c = 0; // This executes only once and will be saved and when the function is called next time then the value will be 1 as c+=1 then 2 then 3,4,5,6....
    int result = x / y + c;
    c += 1;
    return result;
}
int mul(int x, int y = 100)
{
    return x * y;
}
// Constant arguments
int add(const int x, int y = 100)
{
    return x * y;
}
int main()
{
    int a = 20, b = 10;
    // cout << "a / b -> " << divide(a, b) << endl;
    // cout << "a / b -> " << divide(a, b) << endl;
    // cout << "a / b -> " << divide(a, b) << endl;
    // cout << "a / b -> " << divide(a, b) << endl;
    // cout << "a / b -> " << divide(a, b) << endl;
    // cout << "a / b -> " << divide(a, b) << endl;
    // cout << "a / b -> " << divide(a, b) << endl;
    // cout << "a / b -> " << divide(a, b) << endl;
    // cout << "a / b -> " << divide(a, b) << endl;
    cout << "a * b -> " << mul(a) << endl;
    cout << "a * b -> " << mul(a, b) << endl;
    return 0;
}