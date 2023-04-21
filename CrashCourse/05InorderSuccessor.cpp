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

node* Search(node *root,int data){
    if(root==NULL)return NULL;
    else if(root->data==data)return root;
    else if(data<=root->data)return Search(root->left,data);
    else return Search(root->right,data);
}


void displayBST(node* root) {
    if (!root) {
        return;
    }
    displayBST(root->left);
    cout << root->data << " ";
    displayBST(root->right);
}

node* GetSuccessor(node *root,int data){
    node *current=Search(root,data);
    if(!current)return NULL;
    if(current->right!=NULL){   // Case 1 : Has right Sub Tree
        return FindMin(current->right);
    }
    else{   // Case 2 : Hasn't right Sub Tree
        node* successor=NULL;
        node* ancestor=root;
        while(ancestor!=current){
            if(current->data<ancestor->data){
                successor=ancestor; //so far this is the deepest node for which current node is in left
                ancestor=ancestor->left;
            }
            else{
                ancestor=ancestor->right;
            }
        }
        return successor;
    }
}

int main(){
    node *root=NULL;
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,8);
    root=Insert(root,12);
    root=Insert(root,6);
    root=Insert(root,11);
    root=Insert(root,20);
    root=Insert(root,17);
    root=Insert(root,16);
    root=Insert(root,25);
    root=Insert(root,27);
    displayBST(root);
    cout<<endl<<GetSuccessor(root,10)->data;
    cout<<endl<<GetSuccessor(root,8)->data;
    cout<<endl;
    return 0;
}
