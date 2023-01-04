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
    bool isPowerOfFour(int n)
    {
        int i = 0;
        while (pow(4, i) <= n)
        {
            if (pow(4, i) == n)
            {
                return true;
            }
            i++;
        }
        return false;
    }
};
int main()
{
    Solution s;
    cout << s.isPowerOfFour(3);
    return 0;
}