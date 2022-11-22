// CPP program to find the most frequent element
// in an array.
#include <bits/stdc++.h>
using namespace std;

int mostFrequent(int *arr, int n)
{
    // code here
    int maxcount = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxcount)
        {
            maxcount = count;
        }
    }

    return maxcount;
}

int main()
{
    int arr[] = {4, 8, 6, 8, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mostFrequent(arr, n);
    return 0;
}

// This code is contributed by Arpit Jain
