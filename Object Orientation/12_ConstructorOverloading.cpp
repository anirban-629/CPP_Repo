#include <iostream>
using namespace std;
class A
{
    int data;

public:
    A(int a = 500)
    {
        data = a;
        cout << data << endl;
    }
};
int main()
{
    A a;
    A b(1);
    return 0;
}