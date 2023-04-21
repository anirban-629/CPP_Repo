#include<iostream>
#include<queue>
using namespace std;
typedef struct Node{
    int data;
    Node *left;
    Node *right;
}node;

node* GetNewNode(int data){
    node *t=new node;
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

node* FindMin(node *root){
    if(root==NULL)return root;
    if(root->left==NULL)return root;
    return FindMin(root->left);
}

void displayBST(node* root) {
    if (!root) {
        return;
    }
    displayBST(root->left);
    cout << root->data << " ";
    displayBST(root->right);
}

node* Delete(node *root,int data){
    if(!root)return root;
    else if(data<root->data)root->left=Delete(root->left,data);
    else if(data>root->data)root->right=Delete(root->right,data);
    else{
        if(root->left==NULL && root->right==NULL){  //Case 1
            delete root; // Dangling Pointer (Still the memory is alocated val is deleted)
            root=NULL; // Set the value as NULL
        }
        // Case 2
        else if(root->left==NULL){
            node *temp=root;
            root=root->right;            
            delete temp;
        }
        else if(root->right==NULL){
            node *temp=root;
            root=root->left;            
            delete temp;
        }
        else {  //Case 3
            node *temp=FindMin(root->right);
            root->data=temp->data;
            root->right=Delete(root->right,temp->data);
        }
    }
    return root;
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
    displayBST(root);
    root=Delete(root,80);
    cout<<endl;
    displayBST(root);
    cout<<endl;
    return 0;
}

/*  THIS BINARY SEARCH TREE 
        50
    25      60
 5     20 80   100
*/