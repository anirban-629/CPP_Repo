#include <iostream>
using namespace std;
int main()
{
    double buy, sell;

    cout << "ENTER BUYING AMOUNT -> ";
    cin >> buy;
    cout << "ENTER SELLING AMOUNT -> ";
    cin >> sell;

    (buy < sell) ? (cout << "PROFIT: " << ((sell - buy) / buy) * 100 << "%") : (cout << "LOSS: " << ((buy - sell) / buy) * 100 << "%");

    return 0;
}