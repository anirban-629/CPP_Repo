#include<iostream>
using namespace std;
int maxEle(int *arr, int n)
{
    int max_= INT_MIN;
    int min_{};
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max_)
            max_=arr[i];
        if(arr[i]<min_){
            min_=arr[i];
        }

    }
    return max_+min_;
}

int main()
{
    int arr[]= {-2,1,-4,5,3};
    cout<<maxEle(arr,5);
    return 0;
}
