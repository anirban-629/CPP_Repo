#include <iostream>
using namespace std;
void duplicateString(int str, int size)
{
    int lastDuplicate = 0, j = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            j = i + 1;
            while (str[j] == str[i])
                j++;
            cout << str[i] << " is appearing " << j - i << " times" << endl;
            i = j - 1;
        }
    }
}
int main()
{
    string str = "finding";

    return 0;
}