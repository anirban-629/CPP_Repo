#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

void rotate_(int arr[], int n)
{
    vector<int> ans;
    ans.push_back(arr[n-1]);
    for(int i=0;i<n-1;i++)ans.push_back(arr[i]);
    for(int i=0;i<n;i++)arr[i]=ans[i];
}
int main()
{
    int a[]= {1, 2, 3, 4, 5};
    rotate_(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}


