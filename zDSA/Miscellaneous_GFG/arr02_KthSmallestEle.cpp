#include<iostream>
#include<algorithm>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    sort(arr,arr+(r+1));
    return arr[k-1];
}

int main()
{
    int arr[]= {7,10,4,20,15};
    cout<<kthSmallest(arr,0,4,4);
    return 0;
}
