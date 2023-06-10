//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct Node
//{
//    int data;
//    struct Node *next;
//}*HEAD=NULL;
//typedef struct Node node;
//
//node* createLinkedList(vector<int> arr);
//void display(node* p);
//
//int main()
//{
//    vector<int> arr;
//    int size;
//    cout<<"Enter the Size of the Linked List - ",cin>>size;
//    for(int i=0; i<size; i++)
//    {
//        int temp;
//        cin>>temp;
//        arr.push_back(temp);
//    }
//    node *LL1=createLinkedList(arr);
//    display(LL1);
//    return 0;
//}
//
//node* createLinkedList(vector<int> arr)
//{
//    HEAD=new node;
//    HEAD->data=arr.at(0);
//    HEAD->next=NULL;
//    node *t,*LAST=HEAD;
//    int i=1;
//    while(i<arr.size())
//    {
//        t=new node;
//        t->data=arr.at(i++);
//        LAST->next=t;
//        t->next=NULL;
//        LAST=t;
//    }
//    return HEAD;
//}
//
//void display(node *p){
//    if(p==NULL)
//        exit(0);
//    else{
//        cout<< p->data<<" ";
//        display(p->next);
//    }
//}

