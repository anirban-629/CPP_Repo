#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<set>
using namespace std;

void merge_(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    vector<int> ans;
    for(int i=nums1.size()-1; i>=0; i--)
    {
        cout<<nums1[i]<<endl;
        if(i<m)
        {
            ans.push_back(nums1[i]);
        }
        nums1.pop_back();
    }
    for(int i=nums2.size()-1; i>=0; i--)
    {
        cout<<nums2[i]<<endl;
        if(i<n)
        {
            cout<<"PB "<<nums2[i]<<endl;
            ans.push_back(nums2[i]);
        }
        nums2.pop_back();
    }

    sort(ans.begin(),ans.end());
    for(int ele:ans)
    {
        nums1.push_back(ele);
    }
}

int main()
{
    vector<int> num1{1,2,3,0,0,0},num2{2,5,6};
    int m = 3, n = 4;
    merge_(num1,m,num2,n);
    cout<<endl;
//    for(int ele:num2)
//        cout<<ele<<" ";
}
