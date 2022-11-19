#include <iostream>
#include <sstream>
using namespace std;
void ip(string address)
{
    string str = "";
    for (int i = 0; i < address.length(); i++)
    {
        if (address.at(i) == '.')
        {
            str.append("[.]");
        }
        else
        {
            str.push_back(address.at(i));
        }
    }
    cout << str << endl;
}
int main()
{
    ip("255.100.50.0");
    return 0;
}