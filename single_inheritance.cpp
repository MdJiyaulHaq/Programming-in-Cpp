
// in the following program we will learn how inheritance works and what are its types.
/*
a. single inheritance
b. multiple inheritance
c. hierarchical inheritance
d. hybrid inheritance
*/

// example of single inheritance

#include <iostream>
#include <string>
using namespace std;

class Base
{
private:
    int a;

public:
    int b;
    void setValues();
    int get_a();
    int get_b();
};

void Base::setValues()
{
    a = 5;
    b = 6;
}

/* this function when derived in derived class will   be an only function which will be able to call a */
int Base::get_a()
{
    return a;
}

/*         this part is redundant as b is not a private data.
             it can be called anytime

int Base::get_b()
{
    return b;
}                              */

/* if derived class is private then functions derived from base class will be private too. then it can't be called normally rather using a member function */
class derived : /* public */ Base
{
private:
    int c;

public:
    void sum();
    void display();
};

void derived::sum()
{
    setValues();
    //notice that setvalue function is called via sum function.
    c = b + get_a();
}

void derived::display()
{
    cout << "The value of a is :" << get_a() << endl;
    cout << "The value of b is :" << b << endl;
    cout << "The sum c is :" << c << endl;
}

int main()
{
    derived s1;
    // s1.setValues();

    /* if derived class is private then functions derived from base class will be private too. then it can't be called normally rather using a member function */
    s1.sum();
    s1.display();

    return 0;
}
