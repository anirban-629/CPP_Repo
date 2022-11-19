#include <iostream>
using namespace std;
template <class T1 = int, class T2 = int>
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

    myClass<> data1(4, 100);
    myClass<int, string> data2(4, "Anirban");
    myClass<int, char> data3(4, 'c');
    myClass<int, float> data4(4, 7.8);
    data1.display();
    data2.display();
    data3.display();
    data4.display();
    return 0;
}