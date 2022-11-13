#include <iostream>
using namespace std;
class Employee
{
    static int count; // -> Default value is 0 for static members
    int id;

public:
    void setData(void)
    {
        cout << "Enter id ->  ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "EMPLOYEE ID -> " << id << endl;
        cout << "EMPLOYEE NUMBER -> " << count << endl;
    }
    static void getCount(void)
    {
        cout << "Value of count = " << count << endl;
    }
};
int Employee::count; // -> Declaring that the static count is related with the class not with the objects of the class

// int Employee::count=100; //-> that means that count is initalized with 100
int main()
{
    Employee a, b, c;
    a.setData();
    a.getData();
    // a.getCount();
    Employee::getCount();

    b.setData();
    b.getData();
    // b.getCount();
    Employee::getCount();

    c.setData();
    c.getData();
    Employee::getCount();
    // c.getCount();

    return 0;
}