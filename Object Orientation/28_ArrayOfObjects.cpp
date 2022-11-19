#include <iostream>
using namespace std;
class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Id: " << id << endl
             << "Price: " << price << endl;
    }
};
int main()
{
    int size = 2;
    int id = 100, price = 200;
    Shop *ptr = new Shop[size];
    Shop *temp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout << "Added item " << i + 1 << endl;
        (temp++)->setData(id, price);
        id += 100;
        price += 200;
    }

    for (int j = 0; j < size; j++)
    {
        cout << "Item " << j + 1 << endl;
        // ptr[j].getData();
    }

    return 0;
}