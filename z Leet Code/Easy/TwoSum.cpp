#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                }
                if (j > nums.size())
                {
                    break;
                }
            }
        }
        return result;
    }
};
int main()
{
    vector<int> v, result;
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);

    // v.push_back(2);
    // v.push_back(7);
    // v.push_back(11);
    // v.push_back(15);

    Solution s;

    result = s.twoSum(v, 6);
    cout << result.at(0) << endl
         << result.at(1) << endl;
    return 0;
}