#include <iostream>
using namespace std;

class Base
{
public:
    int a;
    void display()
    {
        cout << "the value of a is:" << a << endl;
    }
};

class Derived : public Base
{
public:
    int b;
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
    ptr1->a = 20;
    //ptr1->b = 33;  // this will throw an error
    ptr1->display();

    ptr2 = &obj2; // this is ovbious ptr2 can point to obj2
    ptr2->b = 37;
    ptr2->display();
    ptr2->a = 23; //Base class is derived so a is also acessible via ptr2
    ptr2->display();
    return 0;
}