    #include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number() { a = 0; } // -> Default constructor
    Number(int num)
    {
        a = num;
    }

    // ! If no copy constructor found, compiler supplies default copy constructor

    Number(Number &obj)
    {
        cout << "Copy constructor called " << endl;
        a = obj.a;
    }

    void show()
    {
        cout << a << endl;
    }
};
int main()
{
    Number a, b, c(300), z2;
    a.show();
    b.show();
    c.show();

    // -> Copy Constructor call
    // Number z = Number(a);
    Number z = Number(c);
    z.show();
    z2 = z; // Copy constructor not called as assignment operator is working
    z2.show();
    Number z3 = z; // Copy constructor call
    z.show();
    return 0;
}
