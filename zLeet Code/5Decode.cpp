// #include <iostream>
// #include <cstring>

// using namespace std;
// class Solution
// {
// public:
//     string decodeMessage(string key, string message)
//     {
//         string result[10000];

//         for (int i = 0; i < message.length(); i++)
//         {
//             for (int j = 0; j < key.length(); j++)
//             {
//                 if (message[i] == " ")
//                 {
//                     result.append(" ");
//                 }
//                 else if (message[i] == key[j])
//                 {
//                     result.append(key[j]);
//                 }
//             }
//         }
//         cout << result[0] << endl;
//         return " ";
//     }
// };
// int main()
// {
//     Solution s;
//     cout << s.decodeMessage("eljuxhpwnyrdgtqkviszcfmabo", "zwx hnfx lqantp mnoeius ycgk vcnjrdb");
//     return 0;
// }