
// in this programme we will learn how to use default constructor


#include <iostream>
#include <string>
using namespace std;

class complex
{
private:
    int a, b;

public:
    /*this is a constructor. this is a function which has name same as its class. */
    complex(); //this constructor takes no argument hence is called default constructor.
    /* constuctor doesn't need data types to be declared like int,void.*/
    void printNum()
    {
        cout << "the number is: " << a << "+" << b << "i" << endl;
    }
};

complex ::complex()
{
    a = 3;
    b = 2;
}

int main()
{
    complex c1, c2;

    // complex(); this doesn't need to be run manually . this is invoked whenever an object is created;

    c1.printNum();

    c2.printNum();

    return 0;
}
