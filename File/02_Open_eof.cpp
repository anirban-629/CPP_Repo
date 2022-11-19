#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("02_Open_eof.txt");
    out << "This is me\n";
    out << "This is me also\n";
    out << "This is me also 1\n";
    out << "This is me also 2\n";
    out.close();

    ifstream in;
    string st1, st2;
    in.open("02_Open_eof.txt");
    // in >> st1 >> st2;
    // cout << st1 << st2;
    while (in.eof() == 0)
    {
        getline(in, st1);
        cout << st1 << endl;
    }
    in.close();
    return 0;
}