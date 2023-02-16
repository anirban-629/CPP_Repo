#include <iostream>
using namespace std;
int main()
{
    int temperatureC, temperatureF;
    cout << "Enter temperature in Celsius -> ", cin >> temperatureC;
    cout << "Enter temperature in Fahrenheit -> ", cin >> temperatureF;

    cout << "Celsius - Fahrenheit -> " << (1.8 * temperatureC) + 32 << endl
         << "Fahrenheit - Celsius -> " << (temperatureF - 32) / 1.8;

    return 0;
}