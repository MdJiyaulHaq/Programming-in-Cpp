#include <iostream>
#include <string>
using namespace std;

class A
{
    int x, y, z;

public:
    /*
    A(int i,int j)
    {
        x=i;
        y=j;
        z=x+y;
        cout<<"the value of x is:"<<x<<endl;
        cout<<"the value of y is:"<<y<<endl;
                cout << "the sum of x and y is:" << z << endl;

    }
    alternative to this . we can also initialize constructor as shown below
    */
    A(int i, int j) : x(i), y(j), z(i + j) // z(x+y) is also permited instead of z(i+j)
    {
        cout << "the value of x is:" << x << endl;
        cout << "the value of y is:" << y << endl;
        cout << "the sum of x and y is:" << z << endl;
    }
};

int main()
{
    A a1(3, 5);

    return 0;
}