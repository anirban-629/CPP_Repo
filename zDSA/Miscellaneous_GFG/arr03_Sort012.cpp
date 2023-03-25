#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void sort012(int a[], int n)
{
    vector<int> arr0,arr1,arr2;
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
            arr0.push_back(a[i]);
        if(a[i]==1)
            arr1.push_back(a[i]);
        if(a[i]==2)
            arr2.push_back(a[i]);
    }
    int index=0;
    for(int i=0; i<arr0.size(); i++){a[index++]=arr0[i];}
    for(int i=0; i<arr1.size(); i++){a[index++]=arr1[i];}
    for(int i=0; i<arr2.size(); i++){a[index++]=arr2[i];}
}


int main()
{
    int a[]= {0,2,1,2,0};
    int n=5;
    sort012(a,n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
