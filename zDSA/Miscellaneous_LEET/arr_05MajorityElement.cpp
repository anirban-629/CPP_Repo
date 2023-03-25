
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<set>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int count = 0;
    int candidate = 0;

    for (int num : nums)
    {
        if (count == 0)
        {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    return candidate;
}
int main()
{
    vector<int> num1{3,2,3};
    cout<<majorityElement(num1);
}



