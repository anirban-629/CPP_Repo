#include <iostream>
using namespace std;
class Emp
{
    int id;
    int salary;

public:
    void setId(int id)
    {
        int salary = 100 + id;
        this->id = id;
    }
    void getId()
    {
        cout << "Id -> " << id << endl
             << "Salary -> " << salary << endl;
    }
};
int main()
{
    Emp meta[100];
    for (int i = 0; i < 5; i++)
    {
        meta[i].setId(i);
    }
    for (int i = 0; i < 5; i++)
    {
        meta[i].getId();
    }

    return 0;
}