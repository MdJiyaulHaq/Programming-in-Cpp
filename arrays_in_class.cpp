#include <iostream>
using namespace std;

class mart
{
private:
    int count;
    int itemId[100];
    int itemPrice[100];

public:
    void counter();
    void setPrice();
    void getPrice();
};

void mart::counter()
{
    int count = 0;
}

void mart::setPrice()
{
    cout << "Enter the Id of the product:" << count + 1 << endl;
    cin >> itemId[count];
    cout << "Enter the Price of the product:" << count + 1 << endl;
    cin >> itemPrice[count];
    count++;
}

void mart::getPrice()
{
    cout << endl;
    cout << "The total no of products is:" << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ":The Price of the product with product_Id(" << itemId[i] << ") is:" << itemPrice[i] << endl;
    }
}

int main()
{
    mart madina;
    madina.counter();
    // if you want to set the data for several items then run a loop
    madina.setPrice();
    madina.setPrice();
    madina.setPrice();
    madina.getPrice();

    return 0;
}