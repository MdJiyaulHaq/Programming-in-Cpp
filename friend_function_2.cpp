
//  this program is the continued of friend function.
// this is another example of friend function being used

#include <iostream>
#include <string>
using namespace std;
class B;
class A
{
    int x;

public:
    void getData(int val)
    {
        x = val;
    }
    void showData()
    {
        cout << "the value of x is :" << x << endl;
    }

    friend void swap(A &, B &);
};

class B
{
    int y;

public:
    void getData(int val)
    {
        y = val;
    }
    void showData()
    {
        cout << "the value of y is :" << y << endl;
    }

    friend void swap(A &, B &);
};

void swap(A &p, B &q)
{
    int temp = p.x;
    p.x = q.y;
    q.y = temp;
}
int main()
{
    A a;
    B b;
    a.getData(12);
    b.getData(21);
    cout << "before swapping:" << endl;
    a.showData();
    b.showData();
    swap(a, b);
    cout << "after swapping:" << endl;
    a.showData();
    b.showData();

    return 0;
}