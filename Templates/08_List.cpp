#include <iostream>
#include <list>
using namespace std;
void display(list<int> &l1)
{
    list<int>::iterator iter;
    for (iter = l1.begin(); iter != l1.end(); iter++)
    {
        cout << *iter << endl;
    }
    cout << "Display()" << endl;
}

int main()
{
    list<int> l1; //  Length - 0
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    // display(l1);

    list<int> l2(5); // Empty list
    list<int>::iterator iter;
    iter = l2.begin();
    *iter++ = 6;
    *iter++ = 7;
    *iter++ = 8;
    *iter++ = 9;
    *iter++ = 10;
    // display(l2);
    // l1.pop_front();
    // l1.pop_back();
    // l2.pop_front();
    // l2.pop_back();
    // l2.remove(9);
    // display(l1);
    // display(l2);
    // l2.reverse();
    // display(l2);
    l1.merge(l2);
    l1.reverse();
    display(l1);
    return 0;
}