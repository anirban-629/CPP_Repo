#include <iostream>
using namespace std;

template <class T>
class A
{
public:
    T data;
    A(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void A<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "func " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "Templated func " << a << endl;
}

int main()
{
    A<int> a(100);
    // a.display();

    func(12);
    // Exact match takes highest priority
    func('a');
    return 0;
}