#include<iostream>
using namespace std;
typedef struct Node{
    int data;
    Node *left;
    Node *right;
}node;// Pointer To Root Node

node* GetNewNode(int data){ // Creating dynamic nodes
    node *t=new node();
    t->data=data;
    t->left=t->right=NULL;
    return t;
}

//node* Insert(node **root,int data){ // ** Because here root is already a pointer so to access a pointer's address we use it
//    if(* root==NULL){
//        root=GetNewNode(data);
//    }
//}

node* Insert(node *root,int data){
    if(root==NULL)root=GetNewNode(data);
    else if(data<=root->data) root->left=Insert(root->left,data);
    else root->right=Insert(root->right,data);
    return root;
}

bool Search(node *root,int data){
    if(root==NULL)return false;
    else if(root->data==data)return true;
    else if(data<=root->data)return Search(root->left,data);
    else return Search(root->right,data);
}

int Max(node *root){
    if(root==NULL)return -1;
    if(root->right==NULL)return root->data;
    return Max(root->right);
}

int Min(node *root){
    if(root==NULL)return -1;
    if(root->left==NULL)return root->data;
    return Min(root->left);
}

int FindHeight(node *root){
    if(root==NULL)return -1;
    return max(FindHeight(root->left),FindHeight(root->right))+1;
}

int main(){
//    node *root=NULL; //creating
    node *root=NULL;
    cout<<Search(root,100)<<endl;
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,8);
    root=Insert(root,12);
    root=Insert(root,20);
    root=Insert(root,17);
    root=Insert(root,25);
    cout<<"SEARCHING- "<<endl;
    cout<<Search(root,10)<<endl;
    cout<<Search(root,15)<<endl;
    cout<<Search(root,30)<<endl;
    cout<<Search(root,12)<<endl;
    cout<<"MAX - "<<Max(root)<<endl;
    cout<<"MIN - "<<Min(root)<<endl;
    cout<<"HEIGHT - "<<FindHeight(root)<<endl;
    return 0;
}
