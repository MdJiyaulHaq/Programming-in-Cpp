// a base class in which there lies atleat one pure virtual function

#include <iostream>
using namespace std;

class shape // abstract base class since it has atleast one pure virtual base class
{
public:
    int r, l, b;
    virtual void area() = 0; // do-nothing function is pure virtual function
};
class square : public shape
{

public:
    void getLB(int l, int b)
    {
        this->l = l;
        this->b = b;
    }
    void area()
    {
        cout << "The area of square is :" << (l * b) << endl;
    };
};
class circle : public shape
{

public:
    void getR(int r)
    {
        this->r = r;
    }
    void area()
    {
        cout << "The area of circle is :" << (r * r * 3.14159) << endl;
    };
};

int main()
{
    // shape s1;    // throws an error because abstract base class cannot have any objectsshape s1; shape s1;

    shape *ptr; // abstract base class can definately have pointer
    square sq1;
    circle c1;

    ptr = &sq1;
    sq1.getLB(3, 4);
    ptr->l;
    ptr->b;
    ptr->area();

    ptr = &c1;
    c1.getR(2);
    ptr->r;
    ptr->area();
    return 0;
}