// -> Userfull Classes :
// * 1. fstreambase
// * 2. ifstream
// * 3. ofstream

// -> Two ways to open a file
// * 1. Using Constructor
// * 2. Using the member of function Open() of the class

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    // Opening a file using constructor
    string st1 = "My name is Anirban.\nI'm a Programmer.";
    string st2;

    // ofstream out("01_Sample.txt"); // Write Operation
    // out << st1;

    ifstream in("01_Sample.txt");
    // in >> st2; // ! Only before first whitespace
    getline(in, st2);
     // cout << st2 << endl;
    getline(in, st2);
    cout << st2 << endl;

    return 0;
}