#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1Int;

    void setBase1(int data) { base1Int = data; }
};
class Base2
{
protected:
    int base2Int;

    void setBase2(int data) { base2Int = data; }
};

class Derived : public Base1, public Base2
{
public:
    void setData(int data1, int data2)
    {
        setBase1(data1);
        setBase2(data2);
    };
    void showData()
    {
        cout << "Data Value in Base 1: " << base1Int << endl;
        cout << "Data Value in Base 2: " << base2Int << endl;
    }
};
int main()
{
    Derived d;
    d.setData(101, 202);
    d.showData();
    return 0;
}