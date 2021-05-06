
// in this programme we will learn what is copy  constructor

#include <iostream>
#include <string>
using namespace std;

class number
{
private:
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int p)
    {
        a = p;
    }

    // note: if compiler doesn't find user defined copy constructor then it creates one by its own.

    number(number &x) /* data type is  number . variable is x but adress is passed.*/
    {
        cout << "copy constructor is invoked." << endl;
        a = x.a; /*the value of a will be the value of a from class x*/
    }

    void printNum()
    {
        cout << "the number is: " << a << endl;
    }
};

int main()
{
    number x, y(6), n3;

    x.printNum();
    y.printNum();

    // there are two valid was to make copy constructor

    number n1(x); /*it takes an object as an argument whose copy is to be made. simply n1 is copy of x*/
    n1.printNum();

    number n2 = y; //copy constructor will be invoked
    n2.printNum();

    n3 = y; //copy constructor will not be invoked
    n3.printNum();

    return 0;
}
