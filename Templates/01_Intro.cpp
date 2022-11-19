#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(3);
    v1.arr[0] = 4.5;
    v1.arr[1] = 5;
    v1.arr[2] = 6.546;
    vector<float> v2(3);
    v2.arr[0] = 7.5;
    v2.arr[1] = 8;
    v2.arr[2] = 9.5;

    cout << v1.dotProduct(v2);

    return 0;
}