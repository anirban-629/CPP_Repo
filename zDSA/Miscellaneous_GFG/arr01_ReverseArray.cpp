#include<iostream>
using namespace std;

string reverseWord(string str)
{
    string result;
    for(int i=str.length(); i>=0; i--)
    {
        result+=str[i];
    }
    return result;
}

int main()
{
    string str="ANIRBAN";
    cout<<reverseWord(str);
    return 0;
}
