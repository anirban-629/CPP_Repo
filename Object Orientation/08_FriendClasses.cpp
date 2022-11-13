#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b) { return a + b; }
    int sumAComplex(Complex, Complex);
    int sumBComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // -> Decclaring function of a class as friend
    // friend int Calculator::sumAComplex(Complex, Complex);
    // friend int Calculator::sumBComplex(Complex, Complex);

    // -> Decclaring the whole class as friend
    friend class Calculator;

public:
    void
    setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber() { cout << a << "+" << b << "i" << endl; }
};

int Calculator::sumAComplex(Complex o1, Complex o2) { return (o1.a + o2.a); }
int Calculator::sumBComplex(Complex o1, Complex o2) { return (o1.b + o2.b); }

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator c;
    int aComplex = c.sumAComplex(o1, o2);
    int bComplex = c.sumBComplex(o1, o2);
    cout << aComplex << endl;
    cout << bComplex << endl;
    return 0;
}