#include <iostream>
using namespace std;
int main()
{
    int y;
    cout << "Enter Number -> ";
    cin >> y;

    cout << ((y == 2) ? "28/29" : ((y >= 1 && y <= 7) ? ((y % 2 == 0) ? "30" : "31") : ((y >= 8 && y <= 12) ? ((y % 2 == 0) ? "31" : "30") : "INVALID")));

    return 0;

    // ! GENERALIZED FORM
    // if (y == 2){
    //     cout << "28/29";
    // }
    // else{
    //     if (y >= 1 && y <= 7){
    //         if (y % 2 == 0){
    //             cout << 30;
    //         }
    //         else{
    //             cout << 31;
    //         }
    //     }
    //     else{
    //         if (y >= 8 && y <= 12){
    //             if (y % 2 == 0){
    //                 cout << 31;
    //             }
    //             else{
    //                 cout << 30;
    //             }
    //         }
    //     }
    // }
}