#include<iostream>
#include<queue>
using namespace std;
typedef struct Node{
    int data;
    Node *left;
    Node *right;
}node;

node* GetNewNode(int data); 
node* Insert(node *root,int data);

bool IsSubTreeGreater(node* root,int val){
    if(root==NULL)return true;
    if(
        root->data>val&&
        IsSubTreeGreater(root->left, val) &&
        IsSubTreeGreater(root->right,val)
        )return true;
    else return false;
}

bool IsSubTreeLesser(node* root,int val){
    if(root==NULL)return true;
    if(
        root->data<=val &&
        IsSubTreeLesser(root->left, val) &&
        IsSubTreeLesser(root->right,val)
        )return true;
    else return false;   
}

bool IsBST(node *root){
    if(root==NULL)return true;
    if(
        IsSubTreeLesser(root->left,root->data) &&
        IsSubTreeGreater(root->right,root->data) &&
        IsBST(root->left)&&
        IsBST(root->right)
        )return true;
    else return false;
}

int main(){
    node *root=NULL;
    // root=Insert(root,50);
    // root=Insert(root,20);
    // root=Insert(root,80);
    // root=Insert(root,5);
    // root=Insert(root,25);
    // root=Insert(root,60);
    // root=Insert(root,100);
    root=Insert(root,10);
    root=Insert(root,5);
    root=Insert(root,20);
    cout<<IsBST(root);
    cout<<endl;
    return 0;
}

node* GetNewNode(int data){
    node *t=new node();
    t->data=data;
    t->left=t->right=NULL;
    return t;
}

node* Insert(node *root,int data){
    if(root==NULL)root=GetNewNode(data);
    else if(data<=root->data) root->left=Insert(root->left,data);
    else root->right=Insert(root->right,data);
    return root;
}
