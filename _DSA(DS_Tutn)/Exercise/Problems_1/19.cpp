#include <iostream>
using namespace std;
int main()
{
    float phy, chem, math, bio, comp, percentage;
    cout << "ENTER PHYSIC'S MARKS OUT OF 100 -> ";
    cin >> phy;
    cout << "ENTER CHEMISTRY'S MARKS OUT OF 100 -> ";
    cin >> chem;
    cout << "ENTER MATH'S MARKS OUT OF 100 -> ";
    cin >> math;
    cout << "ENTER BIOLOGY'S MARKS OUT OF 100 -> ";
    cin >> bio;
    cout << "ENTER COMPUTER'S MARKS OUT OF 100 -> ";
    cin >> comp;

    percentage = ((phy + chem + math + bio + chem) / 500) * 100;
    cout << "TOTAL " << percentage << "% MARKS OBTAINED (";
    (percentage >= 90) ? (cout << "GRADE A)") : ((percentage >= 80) ? (cout << "GRADE B") : ((percentage >= 70) ? (cout << "GRADE C") : (((percentage >= 60) ? (cout << "GRADE D") : ((percentage >= 40) ? (cout << "GRADE E") : ((percentage < 40) ? (cout << "GRADE F") : (cout << "FAIL")))))));

    return 0;
}