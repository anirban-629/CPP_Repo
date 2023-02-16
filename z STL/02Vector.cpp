#include <iostream>
#include <vector>

using namespace std;

int main()
{
     vector<int> v;
     cout << "Elements -> " << v.size() << endl
          << "Capacity(size) -> " << v.capacity() << endl;

     v.push_back(1);
     v.push_back(2);
     cout << "Elements -> " << v.size() << endl
          << "Capacity(size) -> " << v.capacity() << endl;

     v.push_back(3);
     cout << "Elements -> " << v.size() << endl
          << "Capacity(size) -> " << v.capacity() << endl;

     // -> Here the size will be 3 but capacity will be 4 because after getting the 2 elements if i increases then no space are available so it'll be doubled again

     cout << "--------Front-Back---------" << endl
          << v.front() << endl
          << "---------------" << endl
          << v.back() << endl
          << "---------------" << endl
          << "-------Pop-------" << endl
          << v.back() << endl
          << v.size() << endl
          << v.capacity() << endl;

     v.pop_back();
     cout << "---------------" << endl
          << v.back() << endl
          << v.size() << endl
          << v.capacity() << endl;

     vector<int> a(5, 1); //-> size 5 and initalized with 1
     vector<int> b(a);    //-> a is Copied in b

     return 0;
}