#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long int rev = 0;
        int rem, temp = x;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = (rev * 10) + rem;
            temp /= 10;
        }
        if (rev == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Solution s;
    cout << s.isPalindrome(121);
    return 0;
}