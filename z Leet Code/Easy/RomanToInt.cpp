#include <iostream>
#include <string>

using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        string temp = s;
        int i = 0, result=0;
        // cout << s.length() << endl;
        while (temp != "")
        {
            if (s.at(i) == 'I')
            {
                result += (temp.length() - 1) * 10;
                // cout << s.length() << endl;
                // string res = to_string((s.length() - 1) * 10);
                // cout << s.at(i) << endl;
                // cout << res << endl;
                // temp = temp.substr(i, temp.length());
                // cout << temp << endl;
                result += res;
            }

            i++;
        }

        return result;
    }
};
int main()
{
    Solution s;
    cout << s.romanToInt("III");
    return 0;
}
/*
if (s.at(i) == 'V')
            {
                cout << s.at(i) << endl;
            }
            if (s.at(i) == 'X')
            {
                cout << s.at(i) << endl;
            }
            if (s.at(i) == 'L')
            {
                cout << s.at(i) << endl;
            }
            if (s.at(i) == 'C')
            {
                cout << s.at(i) << endl;
            }
            if (s.at(i) == 'D')
            {
                cout << s.at(i) << endl;
            }
            if (s.at(i) == 'M')
            {
                cout << s.at(i) << endl;
            }
            // result += 'a';
            // cout << "Turn " << i << " " << result << endl;
*/