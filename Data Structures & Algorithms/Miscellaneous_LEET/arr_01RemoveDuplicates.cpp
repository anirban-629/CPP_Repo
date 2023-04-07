#include<iostream>
#include<vector>
#include<set>
using namespace std;

int removeDuplicates(vector<int>& nums){
    set<int> ans;
    for(int ele:nums){
        ans.insert(ele);
        nums.pop_back();
    }
    for(int ele:ans){
        nums.push_back(ele);
    }

    return ans.size();
}

int main(){
    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums)<<endl;
    for(int ele:nums)
        cout<<ele<<" ";
}
