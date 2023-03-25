#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord(string input)
{
    vector<string> ans;
    string s="",sub="";
    int i=0,j=0,size=input.size();
    while(true){
        if(input=="")
            break;

        if(input[i]==' '){
            ans.push_back(s);
            s="";
            i++;
            input.erase(input.begin());
        }
        else{
            s+=input[i];
            cout<<input[i]<<" "<<s<<" "<<endl;
            input.erase(input.begin());
            i++;
        }
    }
    for(auto ele:ans){
        cout<<ele<<endl;
    }
    return "ss";
}

int main()
{

    string str="Always indent your code";
    string ans = reverseEachWord(str);
    cout <<endl<< ans << endl;
    return 0;
}
