
// in the following program we will know what is virtual base class.
/*
the ambiguity arrises when class c inherite class a and class b , as both of them contains the same variables x,y.
*/
#include <iostream>
#include <string>
using namespace std;

class Math
{
public:
    int x, y;
    void display()
    {
        cout << "The value of x is:" << x << endl;
        cout << "The value of y is:" << y << endl;
    }
};

class A : public virtual Math // ambiguity is removed by putting virtual infront of base class and it becomes virtual base class. A is a virtual base class
{
public:
    int getx(int a)
    {
        x = a;
    }
};

class B : public virtual Math // class B is also a virtual base class
{
public:
    int gety(int b)
    {
        y = b;
    }
};

class C : public A, public B
{
public:
    void display_sum()
    {
        cout << "The value of sum is:" << (x + y) << endl;
    }
};
int main()
{
    C c1;
    c1.getx(5);
    c1.gety(7);
    c1.display();
    c1.display_sum();

    return 0;
}
