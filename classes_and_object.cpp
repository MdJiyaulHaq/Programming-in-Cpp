#include <iostream>
using namespace std;

class student
{
private:
    int a, b;

public:
    int p, q;

    void setData(int x, int y);
    void displayData()
    {
        cout << "The number a is: " << a << endl;
        cout << "The number b is: " << b << endl;
        cout << "The number p is: " << p << endl;
        cout << "The number q is: " << q << endl;
    }
};

void student ::setData(int x, int y)
{
    a = x;
    b = y;
}

int main()
{

    student md;

    md.p = 5;
    md.q = 15;
    md.setData(50, 60);
    md.displayData();

    return 0;
}
