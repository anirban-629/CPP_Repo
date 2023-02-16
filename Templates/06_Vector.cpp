#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    for (int i = 0; i < 5; i++)
    {
        vec1.push_back(i + 100);
    }
    // cout << "Initial -> ";
    // display(vec1);
    // cout << "Pop Back -> ";
    // vec1.pop_back();
    // display(vec1);
    // cout << "Insert(iter) -> ";
    vector<int>::iterator iter = vec1.begin();
    cout << "Insert at first position (iter) -> ";
    vec1.insert(iter, 1);
    display(vec1);
    cout << "Insert at next position (iter) -> ";
    vec1.insert(iter + 1, 2);
    display(vec1);
    cout << "Insert at next position with quantity (iter) -> ";
    vec1.insert(iter + 2, 5, 2);
    display(vec1);
    cout << "Erase -> ";

    return 0;
}