#include <iostream>
#include <math.h>
using namespace std;
class SimpleCalculator
{
public:
    int sum(int a, int b) { return a + b; }
    int sub(int a, int b) { return a - b; }
    int mul(int a, int b) { return a * b; }
    int div(int a, int b) { return a / b; }
};
class ScientificCalculator
{
public:
    float sinVal(float degree) { return sin(degree); }
    float cosVal(float degree) { return cos(degree); }
    float tanVal(float degree) { return tan(degree); }
    float cosecVal(float degree) { return 1 / tan(degree); }
    float secVal(float degree) { return 1 / tan(degree); }
    float cotVal(float degree) { return 1 / tan(degree); }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};
int main()
{
    HybridCalculator h;
    cout << h.cotVal(0);
    return 0;
}