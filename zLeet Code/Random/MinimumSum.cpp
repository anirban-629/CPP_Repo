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
    int minimumSum(int num)
    {
        int arr[4], arr2[2], j;
        string s = to_string(num);
        for (size_t i = 0; i < s.length(); i++)
        {
            arr[i] = int(s[i]) - 48;
        }

        return -1;
    }
};
int main()
{
    Solution s;
    cout << s.minimumSum(4009);
    return 0;
}