#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int count = 0;
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "++x" || operations[i] == "x++")
            {
                count++;
            }
            else if (operations[i] == "--x" || operations[i] == "x--")
            {
                count--;
            }
        }
        return count;
    }
};
int main()
{
    vector<string> x1, x2, x3;
    x1.push_back("--x");
    x1.push_back("x++");
    x1.push_back("x++");

    x2.push_back("++x");
    x2.push_back("x++");
    x2.push_back("++x");

    x3.push_back("x++");
    x3.push_back("++x");
    x3.push_back("--x");
    x3.push_back("x--");

    Solution s;
    cout << s.finalValueAfterOperations(x1);
    cout << s.finalValueAfterOperations(x2);
    cout << s.finalValueAfterOperations(x3);
    return 0;
}