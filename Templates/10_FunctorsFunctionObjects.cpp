// * Function Objects: Function wrapped in a class so that it can be accessed as an object
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 5, 3, 4, 2};
    sort(arr, arr + 3);
    // sort(arr, arr + 5, greater<int>());
    // reverse(arr, arr + 5);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}