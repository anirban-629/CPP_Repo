#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    //  -> if else
    // if (age >= 18)
    // {
    //     cout << "General Pass" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "Kid Pass" << endl;
    // }
    // else
    // {

    //     cout << "Age<=18 No Pass !" << endl;
    // }

    switch (age)
    {
    case 20:
        cout << "General Pass" << endl;
        break;
    case 18:
        cout << "Kid Pass" << endl;
        break;
    default:
        cout << "No Pass" << endl;
        break;
    }
    return 0;
}
