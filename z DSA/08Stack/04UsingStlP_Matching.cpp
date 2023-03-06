#include<iostream>
#include<stack>
using namespace std;

stack<char> createStack(){
    stack<char> s;
    return s;
}

//void display(stack<char> s){
//    while(!s.empty()){
//        cout<<"|"<<s.top()<<"|";
//        s.pop();
//    }
//}

bool isBalanced(string exp){
    stack<char> s=createStack();
    for(int i=0;exp[i];i++){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
            s.push(exp[i]);
        }
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            if(s.empty()){
                return false;
            }
            s.pop();
        }
    }
    if(s.empty())return true;
    else return false;
}


int main(){
    string exp="(a+b)";
    cout<<isBalanced(exp);
    return 0;
}
