#include<iostream>
using namespace std;

class node{
public:
    char data;
    node *next;
};

class Stack{
private:
    node *top;
public:
    Stack(){top=NULL;}
    void push(int x);
    void pop();
    void display();
    bool isBalanced(char *exp);
};


int main(){
    Stack s;
    char *exp="[[a+[100*{(a+b)+(c+d)}]]";
    cout<<s.isBalanced(exp);
    return 0;
}

void Stack::push(int x){
    node *t=new node;
    if(t==NULL){
        cout<<"StackOverflow";
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }

}
void Stack::pop(){
    if(top==NULL){
        cout<<"StackUnderflow";
    }
    else{
        node *t;
        t=top;
        top=top->next;
        delete t;
    }
}
void Stack::display(){
    if(top==NULL){
        cout<<"Stack is Empty.. StackUnderflow!!";
    }
    else{
        cout<<endl;
        node *t=top;
        for(int i=0;t!=NULL;i++){
            if(i==0){
                cout<<"|"<<t->data<<"| <- TOP"<<endl;
            }
            else{
                cout<<"|"<<t->data<<"|"<<endl;
            }
            t=t->next;
        }
        cout<<endl;
    }
}
bool Stack::isBalanced(char *exp){
    for(int i=0;exp[i];i++){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
            push(exp[i]);
        }
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            if(top==NULL){
                return false;
            }
            pop();
        }
    }
    if(top==NULL)
        return true;
    else
        return false;

}


