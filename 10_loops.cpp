#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 10;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << n << "X" << i << " -> " << n * i << endl;
    // }

    // int i = 1;
    // while (i <= 10)
    // {
    // cout << n << "X" << i << " -> " << n * i << endl;
    // i++;
    // }

    int i = 1;
    do
    {
        cout << n << "X" << i << " -> " << n * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}
