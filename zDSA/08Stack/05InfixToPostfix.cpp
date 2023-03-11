#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int pre(char c)
{
    if(c=='+'||c=='-')
        return 1;
    if(c=='*'||c=='/')
        return 1;
    return 0;
}

bool isOperand(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/')
        return 0;
    return 1;
}

string convert(string str)
{
    stack<char> st;
    vector<char> postfix_exp;
    string postfix="ABC";
    int i=0,j=0;
    while(i<str.length()){
        if(isOperand(str[i])){
            postfix_exp[j++]=str[i++];
        }
        else{
            if(pre(str[i])>pre(st.top())){
                st.push(str[i]);
            }
            else{
                postfix_exp[j++]=st.top();
                st.pop();
            }
        }
    }

    for(int i=0;i<postfix_exp.size();i++){
        cout<<postfix_exp[i]<<" ";
    }

    return postfix;
}

int main()
{
    string str="a+b*c-d/e";
    string postfix=convert(str);
    cout<<postfix;
    return 0;
}
