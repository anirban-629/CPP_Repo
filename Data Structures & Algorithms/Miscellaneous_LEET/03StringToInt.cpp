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
    int myAtoi(string s)
    {
        vector<int> arr;

        map<char, int> myInt;
        myInt.insert(
            {
                {'0', 0},
                {'1', 1},
                {'2', 2},
                {'3', 3},
                {'4', 4},
                {'5', 5},
                {'6', 6},
                {'7', 7},
                {'8', 8},
                {'9', 9},
            });
        char sign;
        int result = 0;
        for (int i = 0; i < s.length(); i++)
        {
            else if (s[i] == ' ' ||
                     s[i] == '-' ||
                     s[i] == '+' ||
                     s[i] == '0' ||
                     s[i] == '1' ||
                     s[i] == '2' ||
                     s[i] == '3' ||
                     s[i] == '4' ||
                     s[i] == '5' ||
                     s[i] == '6' ||
                     s[i] == '7' ||
                     s[i] == '8' ||
                     s[i] == '9')
            {
                if (s[i] == '-')
                {
                    sign = '-';
                }
                else if (s[i] == '+' || s[i] == ' ')
                {
                    sign = '+';
                }
                else
                {
                    arr.push_back(myInt[s[i]]);
                }
            }
        }

        for (int i = 0; i < arr.size(); i++)
        {
            result = result * 10 + arr.at(i);
        }
        if (sign == '-')
        {
            result = -result;
            return result;
        }
        return result;
    }
};
int main()
{
    Solution s;
    int a = s.myAtoi("words and 987");
    cout << a;
    return 0;
}