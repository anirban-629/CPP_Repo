#include <iostream>
using namespace std;
class A
{
    int a, b, c, d;

public:
    A(int a)
    {
        this->a = a;
        cout << this->a;
    }
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << this->a << endl
             << this->b << endl;
    }
    A(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        cout << this->a << endl
             << this->b << endl
             << this->c << endl;
    }
    A(int a, int b, int c, int d)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        cout << this->a << endl
             << this->b << endl
             << this->c << endl
             << this->d << endl;
    }
};
int main()
{

    // A c1(1);
    // A c2(1, 2);
    // A c3(1, 2, 3);
    // A c4(1, 2, 3, 4);

    return 0;
}