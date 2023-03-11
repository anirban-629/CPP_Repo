#include<iostream>
#include<cstring>
using namespace std;

int atSamePos(string s)
{
    int len=s.length(),_count{};
    string arr1[len],arr2[len];
    for(int i=0; i<len; i++)
    {
        arr1[i]=s[i];
        arr2[i]=s[len-i-1];
        if(arr1[i]==arr2[i])
            _count++;
    }
    return _count;
}

string lowerCase(string s)
{
    string result="";
    for(int i=0; i<s.length(); i++)
    {
        result+=s[i]+32;
    }
    return result;
}

int main()
{
    string s;
    cin>>s;
    cout<<atSamePos(lowerCase(s));
    return 0;
}
