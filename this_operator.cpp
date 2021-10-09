#include <iostream>
using namespace std;
class A
{
    int a;

public:
    // int setA(int a)   // will give a garbage output
    // {
    //     a=a;
    // }

    // int setA(int a) // is good to go
    // {
    //     this->a = a;
    // }

    A &setA(int a)
    {
        this->a = a;
        return *this;
    }
    void getA()
    {
        cout << "The value of a is:" << a << endl;
    }
};
int main()
{
    A obj;
    // obj.setA(8);
    // obj.getA();

    obj.setA(8).getA();
    //obj.getA();  // getA need not to be explicitly called.

    return 0;
}