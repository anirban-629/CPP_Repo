// -> Inheritance
// * 1. Single inheritance
// * 2. Multiple
// * 3. Hierarchial
// * 4. Multilevel
// * 5. Hybrid

#include <iostream>
using namespace std;

class Employee
{

public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
};

/* //-> Syntax of derived class
class {{derived-class-name}}: {{visibility-mode}} {{base-class-name}}
{{visibility-mode}} -> how you're inheriting public or private

* default visibility-mode -> Private (
* public member of base class becomes private in derived class
* )
* public (public member of base class becomes public in derived class
* )
* Private members are never inherited
 */

// class Programmer : Employee
class Programmer : Employee
{

public:
    int languageCode = 9;
    Programmer(int inpId)
    {
        id = inpId;
    }
    void getId()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee e1(1), e2(2);
    cout << e1.salary << endl
         << e2.salary << endl;

    Programmer p1(3), p2(4);
    p1.getId();
    p2.getId();

    // cout << p1.id << endl; // -> Error as it's private
    cout << p1.languageCode;
    return 0;
}