#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *HEAD = NULL;
typedef struct Node node;

class CircularLinkedList
{
public:
    node *createLinkedList(int arr[], int size);
    void Display(node *p);
    void DisplayR(node *p);
    node *insertAtPos(int pos, int ele);
} n;

int main()
{
    CircularLinkedList cll;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    node *cll1 = cll.createLinkedList(arr, 7);
    cll.Display(cll1);
    cout << endl;
    node *cll2 = cll.insertAtPos(0, 1);
    // node *cll2 = cll.insertAtPos(0, 1);
    // node *cll2 = cll.insertAtPos(8, 1000);
    // node *cll2 = cll.insertAtPos(7, 1000);
    cll.DisplayR(cll2);
    return 0;
}

node *CircularLinkedList::createLinkedList(int arr[], int size)
{
    int i = 0;
    HEAD = new node;
    HEAD->data = arr[i++];
    HEAD->next = NULL;
    node *t, *last = HEAD;
    while (i < size)
    {
        t = new node;
        last->next = t;
        t->data = arr[i++];
        t->next = NULL;
        last = t;
    }
    last->next = HEAD;
    return HEAD;
}

void CircularLinkedList::Display(node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != HEAD);
}

void CircularLinkedList::DisplayR(node *p)
{
    static int flag = 0;
    if (p != HEAD || flag == 0)
    {
        flag = 1;
        cout << p->data << " ";
        DisplayR(p->next);
    }
    flag = 0;
}

node *CircularLinkedList::insertAtPos(int pos, int ele)
{
    node *p, *t;
    int i;
    if (pos == 0)
    {
        t = new node;
        t->data = ele;
        if (HEAD == NULL)
        {
            HEAD = t;
            HEAD->next = HEAD;
            return HEAD;
        }
        else
        {
            p = HEAD;
            while (p->next != HEAD)
                p = p->next;
            p->next = t;
            t->next = HEAD;
            HEAD = t;
            return HEAD;
        }
    }

    p = HEAD;
    for (i = 0; i < pos - 1; i++)
        p = p->next;
    t = new node;
    t->data = ele;
    t->next = p->next;
    p->next = t;
    return HEAD;
}
