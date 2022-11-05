#include <iostream>
using namespace std;
int main()
{
    // int i = 0;
    // while (i < 10)
    // {
    //     if (i == 7)
    //     {
    //         break;
    //     }
    //     cout << i << endl;
    //     i++;
    // }

    int i = 0;
    while (i < 10)
    {
        i++;
        if (i == 2)
        {
            continue;
        }
        cout << i << endl;
        // i++; // here it'll not work as after the true if statement it'll not execute the remaining statements
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     if (i == 2)
    //     {
    //         continue;
    //     }
    //     cout << i << endl;
    // }

    return 0;
}