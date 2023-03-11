#include <iostream>
#include <array>

using namespace std;
int main()
{
    int basicArr[] = {1, 2, 3, 4};
    array<int, 4> stlArr = {1, 2, 3, 4};

    for (int i = 0; i < stlArr.size(); i++)
    {
        cout << stlArr.at(i) << endl;
    }

    cout << "---------------" << endl
         << stlArr.empty() << endl
         << "---------------" << endl
         << stlArr.at(0) << endl
         << "---------------" << endl
         << stlArr.front() << endl
         << "---------------" << endl
         << stlArr.back() << endl
         << "---------------" << endl
         << stlArr.max_size() << endl
         << "---------------" << endl;

    return 0;
}