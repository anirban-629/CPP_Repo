#include <iostream>
using namespace std;
// typedef struct employee is also valid
struct employee
{
    // Data
    int eId;
    char favChar;
    float salary;
} typedef emp;

int main()
{
    // struct employee Anirban === emp Anirban
    // struct employee Anirban;
    emp Anirban;
    struct employee Rahul;
    Anirban.eId = 10;
    Anirban.favChar = 's';
    Anirban.salary = 100;
    cout << "Anirban's eId " << Anirban.eId << endl;
    cout << "Anirban's favchar " << Anirban.favChar << endl;
    cout << "Anirban's salary " << Anirban.salary << endl;
    return 0;
}