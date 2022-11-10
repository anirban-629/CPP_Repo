#include <iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void getPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter Id of Item " << counter+1 << " : ";
    cin >> itemId[counter];
    cout << "Enter Price of Item: ";
    cin >> itemPrice[counter];
    counter++;
}
void Shop::getPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemId[i] << " is -> " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.getPrice();
    return 0;
}