#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream aout("02_ReadWrite.txt");
    string name;
    cout << "Enter Name: ";
    cin >> name;
    aout << "My name is -> " + name;
    aout.close(); // link disconnected with file

    ifstream ain("02_ReadWrite.txt");
    string content;
    // ain >> content;
    getline(ain, content);

    cout << content;
    return 0;
}