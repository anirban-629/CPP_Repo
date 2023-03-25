#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<set>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    vector<int> num0,otherNums;
    for(int ele:nums){
        if(ele==0){
            num0.push_back(ele);
        }
        else{
            otherNums.push_back(ele);
        }
        nums.pop_back();
    }
    for(int i=0;i<otherNums.size();i++)
        nums.push_back(otherNums[i]);
    for(int i=0;i<num0.size();i++)
        nums.push_back(num0[i]);

}

int main()
{
    vector<int> nums{0,1,0,3,12};
    moveZeroes(nums);
    for(int ele:nums)
        cout<<ele<<" ";
}
