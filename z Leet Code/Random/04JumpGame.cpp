#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <queue>
#include <map>
#include <list>
#include <set>
#include <algorithm>
#include <math.h>
using namespace std;
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int i = 0;
        cout << "Entering Loop" << endl;
        while (i + nums.at(i) <= (nums.size()-1))
        {
            if (i + nums.at(i) == (nums.size() - 1))
            {
                return true;
            }
            i = i + nums.at(i);
        }
        cout << "Finished Loop" << endl;

        return false;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3, 2, 1, 0, 4};
    cout << s.canJump(nums) << endl;
    return 0;
}