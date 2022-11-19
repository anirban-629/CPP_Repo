#include <iostream>
using namespace std;
template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 data1, T2 data2)
    {
        this->data1 = data1;
        this->data2 = data2;
    }
    void display()
    {
        cout << data1 << data2 << endl;
    }
};
int main()
{

    myClass<int, char> data(4, 'c');
    data.display();
    return 0;
}