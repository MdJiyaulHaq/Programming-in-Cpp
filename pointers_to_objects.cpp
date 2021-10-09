#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    int setData(int i, int j)
    {
        a = i;
        b = j;
    }
    void displayData()
    {
        cout << "The complex number is:" << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2;
    c1.setData(3, 2);
    c1.displayData();

    complex *ptr = &c2;
    (*ptr).setData(5, 7);
    (*ptr).displayData();
    ptr->setData(5, 7); //this operator works as above
    ptr->displayData();

    complex *p = new complex;
    p->setData(9, 4);
    p->displayData();

    complex *p2 = new complex[2];
    p2->setData(6, 4);
    p2->displayData();
    (p2 + 1)->setData(3, 1);
    (p2 + 1)->displayData();

    return 0;
}