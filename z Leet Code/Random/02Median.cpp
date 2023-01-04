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
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> arr(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), arr.begin());
        sort(&arr[0], &arr[arr.size() - 1]);
        bool isOdd = (arr.size() % 2 != 0) ? true : false;
        if (isOdd)
        {
            return arr.at(arr.size() / 2);
        }
        else
        {
            double a = arr.at((arr.size() / 2) - 1);
            double b = arr.at((arr.size() / 2));
            double result = (a + b) / 2;
            return result;
        }
    }
};
int main()
{
    Solution s;
    vector<int> a = {2, 6};
    vector<int> b = {3, 4, 4};
    cout << s.findMedianSortedArrays(a, b);
    return 0;
}