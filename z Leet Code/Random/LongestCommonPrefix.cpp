#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int ans = strs[0].length(), n = strs.size();
        for (int i = 1; i < n; i++)
        {
            int j = 0;
            while (j < strs[i].length() && strs[i][j] == strs[0][j])
            {
                j++;
            }
            ans = min(j, ans);
        }

        return strs[0].substr(0, ans);
    }
};
int main()
{
    Solution s;
    vector<string> strs;
    strs.push_back("flower");
    strs.push_back("flow");
    strs.push_back("flight");
    cout << s.longestCommonPrefix(strs);
    return 0;
}