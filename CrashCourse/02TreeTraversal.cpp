#include<iostream>
#include<queue>
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

node* Insert(node *root,int data){
    if(root==NULL)root=GetNewNode(data);
    else if(data<=root->data) root->left=Insert(root->left,data);
    else root->right=Insert(root->right,data);
    return root;
}

void LevelOrderTraversal(node *root){ //Time ,Space Complexity -> O(n)
    if(root==NULL)return;
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        Node *current=q.front();
        cout<<current->data<<" ";
        if(current->left!=NULL)q.push(current->left);
        if(current->right!=NULL)q.push(current->right);
        q.pop();
    }
}

void PreOrderTraversal(node *root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void PostOrderTraversal(node *root){
    if(root==NULL)return;
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout<<root->data<<" ";
}

void InorderOrderTraversal(node *root){
    if(root==NULL)return;
    InorderOrderTraversal(root->left);
    cout<<root->data<<" ";
    InorderOrderTraversal(root->right);
}

int main(){
    node *root=NULL;
    root=Insert(root,50);
    root=Insert(root,20);
    root=Insert(root,80);
    root=Insert(root,5);
    root=Insert(root,25);
    root=Insert(root,60);
    root=Insert(root,100);
    cout<<"LevelOrderTraversal: ";LevelOrderTraversal(root);
    cout<<endl<<"InorderOrderTraversal: " ;InorderOrderTraversal(root);
    cout<<endl<<"PreOrderTraversal: ";PreOrderTraversal(root);
    cout<<endl<<"PostOrderTraversal: ";PostOrderTraversal(root);
    cout<<endl;
    return 0;
}
