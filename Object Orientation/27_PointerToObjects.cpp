#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData()
    {
        cout << "Real Part -> " << real << endl;
        cout << "Imaginary Part -> " << imaginary << endl;
    }
};
int main()
{
    // Complex c1;
    // c1.setData(1, 2);
    // c1.getData();

    // Complex *ptr = &c1;
    // Complex *ptr = new Complex;
    // (*ptr).setData(10, 20);
    // (*ptr).getData();

    // Complex *ptr = new Complex;
    // ptr->setData(100, 200);
    // ptr->getData();

    // * Array of Objects
    Complex *ptr = new Complex[4];

    ptr->setData(100, 200); // * ptr -> ptr[0]
    // ptr->getData();
    // (ptr + 0)->getData();

    (ptr + 1)->setData(300, 400);
    // (ptr + 1)->getData();

    (ptr + 2)->setData(500, 600);
    // (ptr + 2)->getData();

    ptr[0].getData();
    ptr[1].getData();
    ptr[2].getData();

    ptr[3].setData(700, 800);
    ptr[3].getData();
    return 0;
}