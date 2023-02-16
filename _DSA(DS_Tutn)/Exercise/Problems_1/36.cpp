#include <iostream>
using namespace std;
int main()
{
    int day_, years = 0, months = 0, days = 0;
    cout << "Enter Day Numbers -> ", cin >> day_;
    while (day_ >= 365)
    {
        day_ -= 365;
        years++;
    }
    while (day_ >= 30)
    {
        day_ -= 30;
        months++;
    }
    cout << years << " YEARS " << months << " MONTHS " << day_ << " DAYS";
    return 0;
}
