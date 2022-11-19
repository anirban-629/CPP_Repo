#include <iostream>
using namespace std;
class Shop
{
    int id;

public:
    void setData(int id)
    {
        // id = id;
        this->id = id;
    }
    void getData()
    {
        cout << "Id: " << id << endl;
    }
};
int main()
{
    Shop s;
    s.setData(10);
    s.getData();
    return 0;
}