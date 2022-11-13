#include <iostream>
using namespace std;

// -> Destructor never takes an arguments or doesnt return anything

int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "Constructor call -> " << count << endl;
    }
    // -> Destructor
    ~num()
    {
        cout << "Destructor call -> " << count << endl;
        count--;
    }
};
int main()
{
    cout << "Main function " << endl;
    cout << "Creating first Object " << endl;
    num n1; 
    {
        cout << "Enter" << endl;
        cout << "creating two more objects" << endl;
        num n2, n3;
        cout << "Exit" << endl;
    }
    cout << "Back to Main function" << endl;

    return 0;
}