#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s; //! by default s is private

public:
    void read(void);
    void chk_bin(void);
    void onesComplement(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number -> ";
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary number ..!";
            exit(0);
        }
    }
}

void binary::onesComplement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Display()" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary num;
    num.read();
    num.chk_bin();
    num.display();
    num.onesComplement();
    num.display();
    return 0;
}