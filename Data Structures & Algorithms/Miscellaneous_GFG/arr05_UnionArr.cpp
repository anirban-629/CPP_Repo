#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    set<int> ans;
    for(int i=0;i<n;i++)ans.insert(a[i]);
    for(int i=0;i<m;i++)ans.insert(b[i]);
    return ans.size();
}
int main()
{
    int n=6,m=2;
    int a[]= {85,25,1,32,54,6};
    int b[]= {85,2};
    cout<<doUnion(a,n,b,m);
}
