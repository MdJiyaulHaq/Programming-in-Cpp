#include <iostream>
using namespace std;

class Base
{
public: 
    int a;
    virtual void display()
    {
        cout << "the value of a is:" << a << endl;
    }
};

class Derived : public Base
{
public:
    int b = 20;
    void display()
    {
        cout << "the value of b is:" << b << endl;
        cout << "the value of a is:" << a << endl;
    }
};

int main()
{
    Base obj1;
    Derived obj2;
    Base *ptr1;
    Derived *ptr2;
    ptr1 = &obj2; //base class pointer is pointing to the object of derived class
    ptr1->a = 10;
    ptr1->display();

    return 0;
}