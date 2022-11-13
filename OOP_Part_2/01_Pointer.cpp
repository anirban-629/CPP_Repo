#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "Address of A is :" << ptr << endl;
    cout << "Value of A is : " << *ptr << endl;

    cout << endl
         << "Dynamic Memory Allocation" << endl
         << endl;

    int *b = new int(50);
    float *c = new float(50.5);
    cout << "Address of B is :" << b << endl;
    cout << "Value of B is : " << *b << endl;

    cout << endl
         << "Address of C is :" << c << endl;
    cout << "Value of C is : " << *c << endl;

    // -> Objects
    int *arr = new int[5];
    arr[0] = 10;
    // arr[1] = 20;
    *(arr + 1) = 20;
    arr[2] = 30;
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    delete[] arr;
    cout << "After delete -> " << endl;
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    // * Delete Operator

    cout << endl
         << endl
         << endl
         << endl
         << endl;
    int z = 100;
    int *ptrI = &z;
    cout << ptrI << endl;
    cout << *ptrI << endl;
    *ptrI = 500;
    cout << ptrI << endl;
    cout << *ptrI << endl;
    cout << z;

    return 0;
}