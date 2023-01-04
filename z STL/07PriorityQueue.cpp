#include <iostream>
#include <queue>

using namespace std;
int main()
{
    // Max heap
    priority_queue<int> maxH;
    // Min heap
    priority_queue<int, vector<int>, greater<int>> minH;

    maxH.push(1);
    maxH.push(2);
    maxH.push(3);
    maxH.push(4);

    cout << "Size of maxHeap: " << maxH.size() << endl;

    int size = maxH.size();
    for (int i = 0; i < size; i++)
    {
        cout << maxH.top() << " ";
        maxH.pop();
    }
    cout << endl;

    minH.push(1);
    minH.push(2);
    minH.push(3);
    minH.push(4);

    cout << " Size of minHeap: " << minH.size() << endl;

    int size1 = minH.size();
    for (int i = 0; i < size1; i++)
    {
        cout << minH.top() << " ";
        minH.pop();
    }
    cout << endl;

    return 0;
}