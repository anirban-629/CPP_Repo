// // // -> discussion

// // #include <iostream>
// // #include <vector>
// // #include <stack>
// // #include <queue>
// // #include <queue>
// // #include <map>
// // #include <list>
// // #include <set>
// // #include <algorithm>
// // #include <math.h>
// // using namespace std;
// // class Solution
// // {
// // public:
// //     double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
// //     {
// //         vector<int> arr(nums1.size() + nums2.size());
// //         merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), arr.begin());
// //         sort(&arr[0], &arr[arr.size()]);

// //         bool isOdd = (arr.size() % 2 != 0) ? true : false;
// //         // cout << "idOdd -> " << isOdd << endl;
// //         if (isOdd)
// //         {
// //             return arr.at(arr.size() / 2);
// //         }
// //         else
// //         {
// //             double a = arr.at((arr.size() / 2) - 1);
// //             double b = arr.at((arr.size() / 2));
// //             double result = (a + b) / 2;
// //             return result;
// //         }
// //         return -10;
// //     };
// // };
// // int main()
// // {
// //     Solution s;
// //     vector<int> nums1 = {1, 2};
// //     vector<int> nums2 = {3, 4};
// //     cout << s.findMedianSortedArrays(nums1, nums2);
// //     // int nums1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
// //     // sort(startAddress,lastAddress);

// //     // sort(nums1.at(0), nums1.at(nums1.size() - 1));
// //     // sort(&nums1[0], &nums1[10]);
// //     // cout << nums1[0] << endl
// //     //      << nums1[1] << endl
// //     //      << nums1[2] << endl
// //     //      << nums1[3] << endl
// //     //      << nums1[4] << endl
// //     //      << nums1[5] << endl
// //     //      << nums1[6] << endl
// //     //      << nums1[7] << endl
// //     //      << nums1[8] << endl
// //     //      << nums1[9] << endl;

// //     // vector<int> x(20);
// //     // merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), x.begin());

// //     // for (int i = 0; i < x.size(); i++)
// //     // {
// //     //     cout << x[i] << endl;
// //     // }

// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <stack>
// #include <queue>
// #include <queue>
// #include <map>
// #include <list>
// #include <set>
// #include <algorithm>
// #include <math.h>
// using namespace std;
// class Solution
// {
// public:
//     int myAtoi(string s)
//     {
//         map<char, int> myInt;
//         vector<int> numArr;
//         myInt.insert(
//             {
//                 {'0', 0},
//                 {'1', 1},
//                 {'2', 2},
//                 {'3', 3},
//                 {'4', 4},
//                 {'5', 5},
//                 {'6', 6},
//                 {'7', 7},
//                 {'8', 8},
//                 {'9', 9},
//             });

//         int i = 0;

//         while (s[i] == ' ')
//             i++;

//         char sign = (int(s[i]) == 45) ? '-' : '+';
//         if (sign == '-')
//             i++;

//         while (i < s.length())
//         {
//             // int num = myInt[s[i]];
//             // cout<<num;
//             // if (myInt[s[i]] >= 0 && myInt[s[i]] <= 9)
//             // {
//             numArr.push_back(myInt[s[i++]]);
//             // }
//             // else
//             // {
//             // i++;
//             // }
//         }

//         int result = 0;

//         for (int j = 0; j < numArr.size(); j++)
//             result = result * 10 + numArr.at(j);

//         if (sign == '-')
//         {
//             result = -result;
//             return result;
//         }
//         else
//             return result;
//     };
// };
// int main()
// {
//     Solution s;
//     int a = s.myAtoi("                                        564321 with words");
//     cout << a;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    char a = '5';
    int a_copy = int(a) - 48;
    int x = 0;
    cout << a + 10 << endl
         << a_copy + 10;
    return 0;
}