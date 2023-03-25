#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<set>
using namespace std;

vector<int> sortedSquares(vector<int>& nums)
{
    vector<int> ans;
    for(int ele:nums)
        ans.push_back(pow(abs(ele),2));
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    vector<int> nums{-4,-1,0,3,10};
    vector<int> ans=sortedSquares(nums);
    for(int ele:ans)
        cout<<ele<<" ";
}
