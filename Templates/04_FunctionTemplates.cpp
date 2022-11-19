#include <iostream>
using namespace std;
template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    return float((a + b) / 2.0);
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    printf("Average: %.3f\n", funcAverage(10.864984, 25.484986419841651894894));
    printf("Average: %.3f\n", funcAverage(15, 25));
    printf("Average: %.3f\n", funcAverage(10.8, 25.123));

    int x = 100, y = 200;
    // swap(x, y); //-> in build
    swapp(x, y);
    cout << x << endl
         << y << endl;

    return 0;
}