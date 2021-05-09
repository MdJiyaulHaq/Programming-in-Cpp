
// in the following program we will learn about heirarchical inheritance.

#include <iostream>
#include <string>
using namespace std;

class Math
{
private:
    int x, y;

public:
    void setx(int);
    int getx();
    void sety(int);
    int gety();
};

void Math ::setx(int i)
{
    << endl
            cout
    << "Enter the value of x:" << endl;
    cin >> x;
}
int Math ::getx()
{
    return x;
}

void Math ::sety(int j)
{
    cout << "Enter the value of y:" << endl;
    cin >> y;
}
int Math ::gety()
{
    return y;
}

class sum : public Math
{
public:
    void display()
    {
        cout << "The sum of numbers is:" << (getx() + gety()) << endl;
    }
};

class multiplication : public Math
{
public:
    void display()
    {
        cout << "The multiplication of numbers is:" << (getx() * gety()) << endl;
    }
};

int main()
{
    sum s1;
    s1.setx(4);
    s1.getx();
    s1.sety(7);
    s1.gety();
    s1.display();

    multiplication m1;
    m1.setx(2);
    m1.getx();
    m1.sety(6);
    m1.gety();
    m1.display();
    return 0;
}
