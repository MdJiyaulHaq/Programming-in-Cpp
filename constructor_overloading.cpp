
// in this programme we will learn what is   constructor overloading

#include <iostream>
#include <string>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex();
    complex(int x);
    complex(int x, int y);
    void printNum()
    {
        cout << "the number is: " << a << "+" << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
complex ::complex(int x)
{
    a = x;
    b = 2;
    /*since we are taking only one argument another will be automatically set to garbage value by compiler unless changed manually.*/
}
complex ::complex()
{
    a = 3;
    b = 4;
    /*since we are taking no arguments both will be automatically set to garbage value by compiler unless changed manually.*/
}

int main()
{
    complex c1, c2(6), c3(5, 7);

    c1.printNum();

    c2.printNum();

    c3.printNum();

    return 0;
}
