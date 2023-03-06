#include<iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*HEAD=NULL;
typedef Node node;

class doublyLinkedList{
public:
    node* create(int arr[],int len);
    void display(node *p);
};

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(int);
    doublyLinkedList dl;
    node *p=dl.create(arr,len);
    dl.display(p);
    return 0;
}

node* doublyLinkedList::create(int arr[],int len){
    int i=0;
    node *t,*last;
    HEAD=new node;
    HEAD->data=arr[i++];
    HEAD->prev=HEAD->next=NULL;
    last=HEAD;
    for(;i<len;i++){
        t=new node;
        t->data=arr[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
    return HEAD;
}

void doublyLinkedList::display(node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
