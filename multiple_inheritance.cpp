
// in the following program we will learn about multiple inheritance.

#include <iostream>
#include <string>
using namespace std;

class A
{
private:
    int x;

public:
    void setx(int);
    int getx();
};

void A ::setx(int i)
{
    cout << "Enter the value of x:" << endl;
    cin >> x;
}
int A ::getx()
{
    return x;
}

class B
{
private:
    int y;

public:
    void sety(int);
    int gety();
};

void B ::sety(int j)
{
    cout << "Enter the value of y:" << endl;
    cin >> y;
}
int B ::gety()
{
    return y;
}

class C : public A, public B
{
public:
    void display();
};
void C ::display()
{

    cout << "The sum is:" << (getx() + gety()) << endl;
}
int main()
{
    C sum;
    sum.setx(4);
    sum.sety(7);
    sum.display();

    return 0;
}
