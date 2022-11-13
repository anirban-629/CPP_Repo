/* //-> For Protected Member ->
!                        Public          Private       Protected
!                      Derivation       Derivation     Derivation
 * Private Member   -> Not Inherited -Not Inherited -not Inherited
 * Protected Member -> Protected    -   Private      -  protected
 * Public Member    -> Public       -   Private      -  Protected
 */
#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};
class Derived : protected Base
{
    int c;
    int d;
};
int main()
{
    Base b;
    Derived d;
    return 0;
}