#include <iostream>
using namespace std;
// 6! = 6*5*4*3*2*1 -> 6*(6-1)!
// 5! = 5*4*3*2*1 -> 5*(4-1)!
// 0! = 1
// n*(n-1)!
int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    else
    {
        return a * (factorial(a - 1));
    }
}

/*
factorial(5)=5*4*factorial(4-1)
factorial(5)=5*4*3*factorial(3-1)
factorial(5)=5*4*3*2factorial(2-1)
factorial(5)=5*4*3*2*1*factorial(1-1)
factorial(5)=5*4*3*2*1*0
*/

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

/*
fi b(5)
fib(4)+fib(3)
fib(2)+fib(1)
*/
int main()
{
    int num = 4;
    cout << factorial(num) << endl;
    cout << fib(num) << endl;
    return 0;
}