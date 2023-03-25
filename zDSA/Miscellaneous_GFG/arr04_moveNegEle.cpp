#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void swap_(int &a,int &b)
{
    int temp =a;
    a=b;
    b=temp;
}

void segregateElements(int arr[],int n)
{
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i]>=0)
            ans.push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0)
            ans.push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
}


int main()
{
    int a[]= {1, -1, 3, 2, -7, -5, 11, 6 };
    int n=8;
    segregateElements(a,n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
