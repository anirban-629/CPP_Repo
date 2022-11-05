#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {23, 45, 56, 89};
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << "Garbage Value (Before setting marks[4]) -> " << marks[4] << endl; // -> Garbage Value
    // marks[4] = 100;
    // cout << marks[4] << endl;
    // marks[2] = 600;
    // cout << "(After setting marks[2]) -> " << marks[2] << endl;

    // for (int i = 0; i < sizeof(marks) / sizeof(int); i++)
    // {
    //     cout << marks[i] << endl;
    // }

    // for (auto &&i : marks)
    // {
    //     cout << i << endl;
    // }

        return 0;
}